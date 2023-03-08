/* 
Done by: Disha Reddy Anugu
Description: Design and implement a readers/writers lock using semaphores that do not starve the 
readers and do not starve the writers
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <pthread.h>
#include <semaphore.h>
#include "readerwriterlockexample.h"


rwlock_t lock ;
void* readThread(void* args);
void* writeThread(void* args);

//With lock calls, function that wastes time for the reader.
void* readThread(void* args){
    acquire_readlock(&lock);
    //critical section starts here
    printf("Reader is reading\n");
    reading_writing ();
    //ending the critical section
    release_readlock(&lock);
    printf("Reader is done\n");
}


//With lock calls, there is a wasting time function for the writer.
void* writeThread(void* args){
    acquire_writelock(&lock);
    //critical section starts here 
    printf("Writer is writing\n");
    reading_writing();
    //ending the critical section here 
    release_writelock(&lock);
    printf("Writing is done\n");
}

int main()
{
    //variables
    char rw;
    FILE *file;
    int error;

    //open inputfile
    file = fopen("scenarios.txt", "r");

    //initialize lock
    rwlock_init(&lock);

    //for threads
    pthread_t thread;

    if (file)
    {
        //scan input file
        printf("Scenario Starts:\n");
        while (fscanf(file, "%c", &rw) != EOF)
        {

            if (rw == 'r')
            {
                printf("Create Reader.\n");
                //if read create a thread to run the readThread
                error = pthread_create(&thread, NULL, (void *)readThread, (void *)&lock);
                if (error != 0)
                {
                    printf("Can't create thread.\n");
                    return 1;
                }
            }

            else if (rw == 'w')
            {
                 printf("Create Writer.\n");
                //if write create a thread to run the writeThread
                error = pthread_create(&thread, NULL, (void *)writeThread, (void *)&lock);
                if (error != 0)
                {
                    printf("Can't create thread.\n");
                    return 1;
                }
            }
        }
    }

    //close file
    fclose(file);

    //exit threads
    pthread_exit(NULL);

    return 0;
}



