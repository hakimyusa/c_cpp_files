#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 5

typedef char pasien;
typedef struct {
    pasien *data[MAX];
    int count;
    int front;
    int rear;
}Queue;

Queue Q;
void create(Queue *Q){
    (*Q).count= 0;
    (*Q).front= 0;
    (*Q).rear= -1;
}

int isEmpty(Queue Q){
    return(Q.count==0);
}

int isFull(Queue Q){
    return(Q.count==MAX);
}

void enqueue(Queue*Q, pasien*nama){
    if(isFull(*Q)){
        printf("Antrian sudah penuh, enqueue gagal");
    }
    else {
        (*Q).rear=((*Q).rear+1) %MAX;
        (*Q).data[(*Q).rear]= malloc(strlen(nama)+1);
        strcpy((*Q).data[(*Q).rear],nama);
        (*Q).count++;
    }
}

void dequeue(Queue*Q){
    if(isEmpty(*Q)){
        printf("Antrian kosong, dequeue gagal");
    }
    else {
        free((*Q).data[(*Q).front]);
        (*Q).front=((*Q).front+1) %MAX;
        (*Q).count--;
    }
}

void Tampil(Queue Q){
    int i;
    for (i=0;i<Q.count;i++) {
        printf("Antrian ke [%d]=%s\n",i,Q.data[(Q.front+i)%MAX]);
    }
}


int main(){
    create(&Q);
    int input;
    char data[50];
    printf("PROGRAM ANTRIAN PASIEN\n");
    printf("[1] Tambah Pasien\n");
    printf("[2] Panggil Pasien\n");
    printf("[3] Tampil Daftar Antrian\n");
    printf("[4] Keluar\n");

    do
    {
        /* code */
        printf("\nInput Pilihan: ");
        scanf("%d", &input);
        if(input == 1){
            printf("Input Nama: ");
            scanf("%s", &data);
            enqueue(&Q, data);
        }
        else if (input == 2)
        {
            /* code */
            dequeue(&Q);
        }
        else if (input == 3)
        {
            /* code */
            Tampil(Q);
        }
        else if (input == 4)
        {
            /* code */
            goto end;
        }
        else 
        {
            printf("Pilihan salah!");
        }
    } while (input != 5);

end:
return 0;
}

