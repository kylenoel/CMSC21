#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("data.txt", "w");

    fprintf(fp, "Hello World\n");
    fprintf(fp, "Files are cool\n");

    fclose(fp);

    printf("Done writing.\n");

    //reading from the file
    char buffer[100]; //buffer to hold the line read from the file
    fp = fopen("data.txt", "r");

    fgets(buffer, sizeof(buffer), fp); //read the first line
    printf("Read from file: %s", buffer);

    //reading the next line
    fgets(buffer, sizeof(buffer), fp); //read the second line
    printf("Read from file: %s", buffer);

    fgets(buffer, sizeof(buffer), fp);
    printf("Read from file: %s", buffer);
    
    fclose(fp);
    return 0;
}