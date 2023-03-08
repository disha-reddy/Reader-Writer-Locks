#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#define Thread pthread_t

//the reader-writer lock struct
typedef struct{

 sem_t starve; //it calls sem wait on the starve when the writer thread enters, , so that when the reader thread comes and puts itself to sleep, preventing the writer from being overwhelmed by readers and starve.
 sem_t mutex; //to stop threads from changing the count
 sem_t write_lock; //to keep a writer out of the system when readers are present
 int Count; //count of readers

} rwlock_t;


void reading_writing();

void reading_writing(){


    int x = 0;
    int T = rand()%10000;
        for (int i=0; i<T;i++){
            for(int j=0; j<T; j++){
                x = i*j;
            }
        }
}

//initializing reader-writer lock
void rwlock_init(rwlock_t *lock){
    lock->Count = 0;
    sem_init(&lock->starve,0, 1);
    sem_init(&lock->mutex,0, 1); 
    sem_init(&lock->write_lock,0, 1);


}
 //acquiring the read lock
void acquire_readlock(rwlock_t *lock){
    sem_wait(&lock->starve);
    sem_wait(&lock ->mutex); 
    lock->Count++;
    if (lock->Count == 1)
        sem_wait(&lock-> write_lock); 

    sem_post(&lock->mutex); 
    sem_post(&lock->starve);
}

//releasing the read lock
void release_readlock(rwlock_t *lock){
    sem_wait(&lock -> mutex);
    lock-> Count--;
    if(lock ->Count == 0)
        sem_post(&lock -> write_lock);
    sem_post(&lock -> mutex);

}

//acquiring the write lock
void acquire_writelock(rwlock_t *lock){
sem_wait(&lock -> starve); 
sem_wait(&lock -> write_lock);
}

//releasing the write lock
void release_writelock(rwlock_t *lock){
sem_post(&lock->write_lock); 
sem_post(&lock->starve); 
}


