void updateLEDMatrix (int index ){
switch ( index ) {
    case 0:
	    HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 0);
    	HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1);
    	HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1);
    	HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1);
    	HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1);
    	HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1);
    	HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1);
    	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1);
        SCAN_LED_MATRIX(index);
        break ;
    case 1:
    	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1);
    	HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 0);
    	HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1);
    	HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1);
    	HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1);
    	HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1);
    	HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1);
    	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1);
    	SCAN_LED_MATRIX(index);
        break ;
    case 2:
    	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1);
    	HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1);
    	HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 0);
    	HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1);
    	HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1);
    	HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1);
    	HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1);
    	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1);
        SCAN_LED_MATRIX(index);
        break ;
    case 3:
    	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1);
    	HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1);
    	HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1);
    	HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 0);
    	HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1);
    	HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1);
    	HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1);
    	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1);
    	SCAN_LED_MATRIX(index);
        break ;
    case 4:
    	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1);
    	HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1);
    	HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1);
    	HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 0);
    	HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 0);
    	HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1);
    	HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1);
    	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1);
    	SCAN_LED_MATRIX(index);
        break ;
    case 5:
    	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1);
    	HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1);
    	HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1);
    	HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1);
    	HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1);
    	HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 0);
    	HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1);
    	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1);
    	SCAN_LED_MATRIX(index);
        break ;
    case 6:
    	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1);
    	HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1);
    	HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1);
    	HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1);
    	HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1);
    	HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1);
    	HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 0);
    	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1);
    	SCAN_LED_MATRIX(index);
        break ;
    case 7:
    	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1);
    	HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1);
    	HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1);
    	HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1);
    	HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1);
    	HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1);
    	HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1);
    	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 0);
    	SCAN_LED_MATRIX(index);

        break ;
         default :
         break ;
      }
 }
 //---------------------------------------dung mang col------
 void SCAN_LED_MATRIX(int index){

	  HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, 0);
	  HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, 0);
	  HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, 0);
	  HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, 0);
	  HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, 0);
	  HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, 0);
	  HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, 0);
	  HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, 0);

	  uint8_t row_value = matrix_buffer[index];
	  if(row_value & 0b00000001) HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, 1);
	  if(row_value & 0b00000010) HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, 1);
	  if(row_value & 0b00000100) HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, 1);
	  if(row_value & 0b00001000) HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, 1);
	  if(row_value & 0b00010000) HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, 1);
	  if(row_value & 0b00100000) HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, 1);
	  if(row_value & 0b01000000) HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, 1);
	  if(row_value & 0b10000000) HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, 1);
}
uint8_t matrix_buffer_col [8] = {
		 0b00000001
		,0b00000010
		,0b00000100
		,0b00001000
		,0b00010000
		,0b00100000
		,0b01000000
		,0b10000000
};
void SCAN_LED_MATRIX_COL(int index){
	  HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1);
	  HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1);
	  HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1);
	  HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1);
	  HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1);
	  HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1);
	  HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1);
	  HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1);

	  uint8_t col_value = matrix_buffer[index];
	  if(col_value & 0b00000001)  HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 0);
	  if(col_value & 0b00000010)  HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 0);
	  if(col_value & 0b00000100)  HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 0);
	  if(col_value & 0b00001000)  HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 0);
	  if(col_value & 0b00010000)  HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 0);
	  if(col_value & 0b00100000)  HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 0);
	  if(col_value & 0b01000000)  HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 0);
	  if(col_value & 0b10000000)  HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 0);
}
void updateLEDMatrix (int index ){
switch ( index ) {
    case 0:
        SCAN_LED_MATRIX_COL(index);
        SCAN_LED_MATRIX(index);
        break ;
    case 1:
    	SCAN_LED_MATRIX_COL(index);
    	SCAN_LED_MATRIX(index);
        break ;
    case 2:
    	SCAN_LED_MATRIX_COL(index);
        SCAN_LED_MATRIX(index);
        break ;
    case 3:
    	SCAN_LED_MATRIX_COL(index);
    	SCAN_LED_MATRIX(index);
        break ;
    case 4:
    	SCAN_LED_MATRIX_COL(index);
    	SCAN_LED_MATRIX(index);
        break ;
    case 5:
    	SCAN_LED_MATRIX_COL(index);
    	SCAN_LED_MATRIX(index);
        break ;
    case 6:
    	SCAN_LED_MATRIX_COL(index);
    	SCAN_LED_MATRIX(index);
        break ;
    case 7:
    	SCAN_LED_MATRIX_COL(index);
    	SCAN_LED_MATRIX(index);

        break ;
         default :
         break ;
      }
 }

