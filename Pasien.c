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
printf("Antrian Sudah Penuh, enqueue gagal");
}
else{
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
for (i=0;i<Q.count;i++){
printf("Antrian ke[%d]=%s\n",i,Q.data[(Q.front+i)%MAX]);
}
}
int main(){
create(&Q);
printf("Antrian Pasien:\n");
enqueue(&Q, "Pasien B");
enqueue(&Q, "Pasien C");
enqueue(&Q, "Pasien D");
dequeue(&Q);
enqueue(&Q, "Pasien E");
Tampil(Q);
}

