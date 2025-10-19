# YuB-X DLL Signer (sign-yubx)

signing service for DLLs.  
Upload a DLL and get a signed, encrypted DLL back.

> **Warning:** this service signs binaries. Use responsibly and keep access restricted.

---

## Quick start

From a workstation with `curl`:

```bash
# 1 HTTPS (recommended)
curl -F "file=@yubx.dll" https://sign-yubx.yub-x.com/upload -o yubx.dll

# Make sure yubx.dll exists and is properly signed
# 2 Then open your injector as usual

