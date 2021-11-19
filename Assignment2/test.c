#include <sys/types.h>
#include <pwd.h>

int main(int argc, char const *argv[]) {
    char name = "nobody";
    struct passwd pwd;
    struct passwd *result;
    result = getpwnam(&name)
    exit(1)
}