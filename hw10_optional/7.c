#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

void *print_thread(void *arg)
{
    for (int i = 0; i < 5; ++i)
    {
        puts(arg);
        sleep(1);   // задержка в 1 секунду
    }
    return NULL;
}

int main(void)
{
    pthread_t thread1, thread2;
    // создаем потоки
    pthread_create(&thread1, NULL, print_thread, "One");
    pthread_create(&thread2, NULL, print_thread, "Two");
    pthread_exit(NULL);
    printf("End...\n");
    return 0;
}