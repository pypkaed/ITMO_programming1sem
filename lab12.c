#include <stdio.h>
#include <direct.h>

// 5. В текущей папке создать папки с именами, указанными в качестве параметров
// командной строки. Создать текстовый файл, в который поместить информацию
// о списке подпапок текущей папки

int main(int argc, char ** argv) {
    FILE *myfile;
    myfile = fopen("dirname.txt", "wt");
    int i;
    for (i = 1; i < argc; i++) {
        if (mkdir(argv[i]) == 0) {
            fputs(argv[i], myfile);
            fputs("\n", myfile);
        }
        else { printf("Error occurred while creating the directory"); }
    }
    fclose(myfile);

    return 0;
}
