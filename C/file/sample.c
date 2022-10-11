#include <stdio.h>

int write()
{
   FILE *fp = NULL;
 
   fp = fopen("test.txt", "w+");

   fprintf(fp, "Write sth by fprintf...\n");

   fputs("Write sth by fputs...\n", fp);

   fclose(fp);
}
 
/* 
1: Write
2:  sth by fprintf...

3: Write sth by fputs...
 */
int main()
{
    write();

    FILE *fp = NULL;
    char buff[255];

    fp = fopen("test.txt", "r");
    
    fscanf(fp, "%s", buff);
    printf("1: %s\n", buff);

    // read first line 
    fgets(buff, 255, (FILE *)fp);
    printf("2: %s\n", buff);

    // read second line
    fgets(buff, 255, (FILE *)fp);
    printf("3: %s\n", buff);

    fclose(fp);
 
}

// for binary input and output
void inoutBinary()
{
    // size_t fread(void *ptr, size_t size_of_elements, size_t number_of_elements, FILE *a_file);          
    // size_t fwrite(const void *ptr, size_t size_of_elements, size_t number_of_elements, FILE *a_file);
}