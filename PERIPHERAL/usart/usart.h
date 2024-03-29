#ifndef __USART_H
#define __USART_H
#include "stdio.h"	
#include "sys.h" 

#define Usart1RxLen	32	
#define Usart1TxLen	180

#define Usart4RxLen	64	
#define Usart4TxLen	64

#define Usart3RxLen	16	
#define Usart3TxLen	16



extern u16 Usart1RxCnt;					//串口1接收到的数据长度
extern u16 OldUsart1RxCnt;				//用于比较
extern u16 Usart1FrameLen;				//串口1接收到整帧数据的长度
extern u8 Usart1RxBuf[Usart1RxLen];		//串口1接收数据缓存
extern u8 Usart1TxBuf[Usart1TxLen];		//串口1发送数据缓存
extern u8 Usart1RecvEnd;				//串口1接收一帧数据完成标志
extern u8 Usart1Busy; 					//串口1忙标志
extern u16 Usart1SendLen;				//串口1将要发送的字符串长度
extern u16 Usart1SendNum;				//串口1已经发送数据的长度

extern u16 Usart3RxCnt;					//串口2接收到的数据长度
extern u16 OldUsart3RxCnt;				//用于比较
extern u16 Usart3FrameLen;				//串口2接收到整帧数据的长度
extern u8 Usart3RxBuf[Usart3RxLen];		//串口2接收数据缓存
extern u8 Usart3TxBuf[Usart3TxLen];		//串口2发送数据缓存
extern u8 Usart3RecvEnd;				//串口2接收一帧数据完成标志
extern u8 Usart3Busy; 					//串口2忙标志
extern u16 Usart3SendLen;				//串口2将要发送的字符串长度
extern u16 Usart3SendNum;				//串口2已经发送数据的长度

extern u16 Usart4RxCnt;					//串口4接收到的数据长度
extern u16 OldUsart4RxCnt;				//用于比较
extern u16 Usart4FrameLen;				//串口4接收到整帧数据的长度
extern u8 Usart4RxBuf[Usart4RxLen];		//串口4接收数据缓存
extern u8 Usart4TxBuf[Usart4TxLen];		//串口4发送数据缓存
extern u8 Usart4RecvEnd;				//串口4接收一帧数据完成标志
extern u8 Usart4Busy; 					//串口4忙标志
extern u16 Usart4SendLen;				//串口4将要发送的字符串长度
extern u16 Usart4SendNum;				//串口4已经发送数据的长度
	  	

void USART1_Init(u32 bound);
void USART3_Init(u32 bound);
void UART4_Init(u32 bound);

void Usart1ReciveFrameEnd(void);
void Usart3ReciveFrameEnd(void);
void Usart4ReciveFrameEnd(void);

void Usart1FrameSend(void);	
void Usart3FrameSend(void);	
void Usart4FrameSend(void);	

u8 UsartSendString(USART_TypeDef* USARTx,u8 *str, u16 len);
void TIM2_Init(u16 arr,u16 psc);

#endif


