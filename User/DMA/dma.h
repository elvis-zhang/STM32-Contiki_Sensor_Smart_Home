#ifndef __DMA_H
#define	__DMA_H	   
#include "stm32f10x.h"
#include "stm32f10x_dma.h"
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ���������ɣ��������������κ���;
//ALIENTEK miniSTM32������
//DMA ����	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//�޸�����:2012/9/8
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) �������������ӿƼ����޹�˾ 2009-2019
//All rights reserved									  
//////////////////////////////////////////////////////////////////////////////////
							    					    

void MYDMA_Config(DMA_Channel_TypeDef*DMA_CHx,u32 cpar,u32 cmar,u16 cndtr);//����DMA1_CHx

void MYDMA_Enable(DMA_Channel_TypeDef* DMA_CHx, u16 bufferSize);//ʹ��DMA1_CHx

void UART2_TXD_DMA_Enable(u16 bufferSize);
#endif



