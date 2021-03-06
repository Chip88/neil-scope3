/**
  ******************************************************************************
  * @file	 	FFT.c
  * @author  	Left Radio
  * @version 	1.5.6
  * @date
  * @brief		NeilScope3 FFT header
  ******************************************************************************
**/

#ifndef _FFT__H
#define _FFT__H

/* Includes ------------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported define -----------------------------------------------------------*/
#define NS_P				8    	// ���������� ������ (��������, ��� ��� �� 256 ����� ��� 8)

/* Exported variables --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void fft_calc(float *in, float *out);
void fft_realMag_calc(int8_t *In, uint8_t *Out);



#endif /* FFT__H */
/*********************************************************************************************************
      END FILE
*********************************************************************************************************/
