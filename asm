typedef unsigned long DWORD;
typedef void* HANDLE;

// Declara funções da API do Windows manualmente
__declspec(dllimport) HANDLE GetStdHandle(DWORD nStdHandle);
__declspec(dllimport) int WriteConsoleA(HANDLE hConsoleOutput, const char* lpBuffer, DWORD nNumberOfCharsToWrite, DWORD* lpNumberOfCharsWritten, void* lpReserved);

#define STD_OUTPUT_HANDLE ((DWORD)-11)

int main() {
    const char *msg = "Hello, world!\n";
    DWORD written;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    WriteConsoleA(h, msg, 14, &written, 0);
    return 0;
}
