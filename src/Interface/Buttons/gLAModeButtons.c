/*************************************************************************************
*
Description :  NeilScope3 User Interface buttons structures
Version     :  1.0.0
Date        :  7.12.2011
Author      :  Left Radio
Comments    :
*
**************************************************************************************/



// Information for button < MENU >
btnINFO btnLMENU =
{
	1,	                	// ����� ������� ������
	btnLower_line,	    	// ������ ������� ������
    38,		            	// ������ ������
	btnHight,           	// ������ ������
	btn_ForeColor,			// ���� ����
	btn_activeForeColor,	// ���� ���� ����� ������ �������
	btn_FontColor,			// ���� ������ ����� ������ �������
	"MENU",		   			// �����
	&qMenu
};


// Information for button < SWEEP >
btnINFO btnLSWEEP =
{
	41,	            		// ����� ������� ������
	btnLower_line,	    	// ������ ������� ������
    75,		            	// ������
	btnHight,           	// ������ ������
	btn_ForeColor,			// ���� ����
	btn_activeForeColor,	// ���� ���� ����� ������ �������
	btn_FontColor,			// ���� ������ ����� ������ �������
	"100MSps",		   		// �����
	&change_Sweep
};


// Information for button < SWEEP_MODE >
btnINFO btnLTRIG =
{
	117,	            	// ����� ������� ������
	btnLower_line,	    	// ������ ������� ������
    40,		           		// ������
	btnHight,           	// ������ ������
	btn_ForeColor,			// ���� ����
	btn_activeForeColor,	// ���� ���� ����� ������ �������
	btn_FontColor,			// ���� ������ ����� ������ �������
	"TRIG",   				// �����
	&change_Trigg_Mode
};


// Information for button < RUN/HOLD >
btnINFO btnLSTART =
{
	158,                 	// ����� ������� ������
	btnUpper_line,      	// ������ ������� ������
    50,		           		// ������
	btnHight,           	// ������ ������
	btn_ForeColor,			// ���� ����
	btn_activeForeColor,	// ���� ���� ����� ������ �������
	btn_FontColor,			// ���� ������ ����� ������ �������
	"START",   			  	// �����
	&RUN_HOLD
};


// Information for button < MEASURMENTS >
btnINFO btnLCURSOR =
{
	209,	             	// ����� ������� ������
	btnLower_line,	    	// ������ ������� ������
    45,		          		// ������
	btnHight,         		// ������ ������
	btn_ForeColor,			// ���� ����
	btn_activeForeColor,	// ���� ���� ����� ������ �������
	btn_FontColor,			// ���� ������ ����� ������ �������
	"CURS",	   			    // �����
	Hide_Show_Meas
};



// Information for < TIME SCALE >
btnINFO btnLTIME_SCALE =
{
	255,	            	// ����� �������
	btnUpper_line - 1,     	// ������ �������
    144,		        	// ������
	btnHight - 1,          	// ������ ������
	LightBlack,			   	// ����
    btn_activeForeColor,	// ���� ���� ����� ������ �������
	btn_FontColor,			// ���� ������ ����� ������ �������
	"",   		    		// �����
	change_TIME_SCALE
};





