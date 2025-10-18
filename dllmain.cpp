extern "C" __declspec(dllexport) LRESULT CALLBACK YuB_X(int code, WPARAM wParam, LPARAM lParam) {
    return CallNextHookEx(NULL, code, wParam, lParam);
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hModule);
        //whatever
        break;
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
