# YuB-X DLL Signer (sign-yubx)

Signing service for DLLs.  
Upload a DLL and get a **signed + encrypted** DLL back.

> ⚠️ **Warning:** This service signs binaries. Use responsibly and keep access restricted.

---

## Add this to your `dllmain.cpp`

Before building your DLL, make sure you export the required callback:

```cpp
extern "C" __declspec(dllexport) LRESULT CALLBACK YuB_X(int code, WPARAM wParam, LPARAM lParam) {
    return CallNextHookEx(NULL, code, wParam, lParam);
}
```
---

## Quick start

From a workstation with `curl`:

```bash
# 1 HTTPS (recommended)
curl -F "file=@yubx.dll" https://sign-yubx.yub-x.com/upload -o yubx.dll

# Make sure yubx.dll exists and is properly signed
# 2 Then open your injector as usual

