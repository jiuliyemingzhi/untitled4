#include <iostream>


typedef union {
    char ch;
    int32_t ch_num;
} UN;

typedef struct _ColorArgb {
    uint8_t blue;
    uint8_t green;
    uint8_t red;
    uint8_t alpha;
} ColorArgb;

typedef union _Color {
    uint32_t color;
    ColorArgb colorArgb;
} Color;

#define FILE_READ_SIZE(NAME, CONTENT){\
    FILE *f;\
    int s = fopen_s(&f, NAME, "r");\
    if (s == 0) {\
        fseek(f, 0, SEEK_END);\
        int size = ftell(f);\
        fseek(f, 0, SEEK_SET);\
        CONTENT\
        fclose(f);\
    }\
}
#define FILE_READ(NAME, CONTENT){\
    FILE *f;\
    int s = fopen_s(&f, NAME, "r");\
    if (s == 0) {\
        CONTENT\
        fclose(f);\
    }\
}
#define FILE_WRITE(NAME, CONTENT){\
    FILE *f;\
    int s = fopen_s(&f, NAME, "w");\
    if (s == 0) {\
        CONTENT\
        fclose(f);\
    }\
}


int main() {
//    FILE_WRITE("tete.txt",
//               for (int i = 0; i < 100; i++) {
//                   fprintf(f, "TIR_II_IR: %d\n", i);
//               }
//    )

    FILE_READ("tete.txt", int a;
            while (fscanf_s(f, "TIR_II_IR: %d\n", &a) == 1) {
                printf("%d\n", a);
            };
    )
    return 0;
}