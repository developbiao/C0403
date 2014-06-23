#include <stdio.h>
#include <stdlib.h>
#define QueueSize_UartLen 8
typedef struct
{
	int front;
	int rear;
	int counter;
	int uart_data[QueueSize_UartLen];
}CIRQUEUE_UART;

//函数声明
void IntitQueue(CIRQUEUE_UART * queue);
int InQueue(CIRQUEUE_UART *queue, int data);
int OutQueue(CIRQUEUE_UART *queue, int *p_data);
int QueueEmpty(CIRQUEUE_UART *queue);
int QueueFull(CIRQUEUE_UART *queue);

int main(void)
{
	int arr[];	
	//IntitQueue(CIRQUEUE_UART)
}

//队列初始化
void IntitQueue(CIRQUEUE_UART *queue)
{
	queue -> front = 0;
	queue -> rear = 0;
	queue -> counter = 0;
}


//入队
int InQueue(CIRQUEUE_UART *queue, int data)
{
	if (QueueFull(queue))
	{
		//输出队满提示
		printf("队已经满了!\n");
		return 0;
	}
	else
	{
		queue -> uart_data[queue -> rear] = data;
		queue -> counter++;
		queue -> rear = (queue -> rear + 1) % QueueSize_UartLen;
		return 1;	
	}
}


//出队
int OutQueue(CIRQUEUE_UART *queue, int *p_data)
{
	if (QueueEmpty(queue))
	{
		//输出指示队列空
		printf("队列为空\n");
		return 0;
	}
	else
	{
		*p_data = queue -> data(front);
		queue -> conter --;
		queue -> front = (queue -> front + 1) % QueueSize_UartLen;
		return 1;
	}
}


//判断队空
int QueueEmpty(CIRQUEUE_UART *queue)
{
	return queue -> counter == 0;
}

//判断队满
int QueueFull(CIRQUEUE_UART *queue)
{
	return queue -> counter == QueueSize_UartLen;
}
