#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

#define PI 3.14159f
#define FREQ 10

#ifdef __linux__
#include <sys/ioctl.h> 
    static inline int console_size() {
        struct winsize w;
        ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
        return w.ws_col;
    }
#elif defined(_WIN32)
    #include <windows.h>
    static inline int console_size() {
        int ret;
        CONSOLE_SCREEN_BUFFER_INFO csbi;
        ret = GetConsoleScreenBufferInfo(GetStdHandle( STD_OUTPUT_HANDLE ),&csbi);
        return csbi.dwSize.X;
    }
#endif
