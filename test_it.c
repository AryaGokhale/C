#include <stdio.h>
#include <unistd.h>
//#include "util/Linked_list/linked_list.h"

char* form_line(char* line, int linelen);
void add_line(char* text_line);
//void render(LinkedList* list);

int file_exists(char* file_name)
{
    return access(file_name,F_OK);    
}

FILE* create_file(char* file_name) 
{
    FILE* fptr;
    char* mode = "r";
    if(0 == file_exists(file_name))
    {
        mode = "a";
    }

    fptr = fopen(file_name, mode);
    
    //return fptr;
    //parse(fptr);
}

/*void parse(FILE* fptr)
{
   //parse the file --> when \n occurs call viewer function add_line (TILL EOF)
   char *line = NULL;
   size_t linecap = 0;
   ssize_t linelen;
   int c = '\n';
   
   while ((linelen = getdelim(&line, &linecap, c, fptr)) > 0)
   {
       form_line(line , linelen+1);
       free(line);
   }
   
}

void closing_file(FILE* fptr)
{
    fclose(fptr);
}

char* form_line(char* line, int linelen)
{
    char *text_line = (char*) malloc(sizeof(linelen));
    add_line(text_line);
}

void add_line(char* text_line)
{
    LinkedList* list = createLinkedList();
    add(text_line, list);
    render(list);

}

void render(LinkedList* list)
{
    //render when EOF occurs
    display(list);
    
}*/

int main()
{   
    char file_name[40];
    printf("Enter file name\n");
    scanf("%s",file_name);
    create_file(file_name);
    return 0;
}
