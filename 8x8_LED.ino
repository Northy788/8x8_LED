
/*
  LED control PIN (ROW & COLUMN)
  R0 -> PB6 (PIN_D12), C0 -> PJ1 (PIN_D14)
  R1 -> PB5 (PIN_D11), C1 -> PJ0 (PIN_D15)
  R2 -> PH5 (PIN_D8), C2 -> PH1 (PIN_D16)
  R3 -> PH4 (PIN_D7), C3 -> PH0 (PIN_D17) 
  R4 -> PH3 (PIN_D6), C4 -> PD3 (PIN_D18)
  R5 -> PE3 (PIN_D5), C5 -> PD2 (PIN_D19)
  R6 -> PE5 (PIN_D3), C6 -> PD1 (PIN_D20)
  R7 -> PE4 (PIN_D2), C7 -> PD0 (PIN_D21)
*/

void GPIO_begin(void);

void TIM1_begin(void);
void TIM3_begin(void);
void TIM4_begin(void);

void TIM1_PWM(uint8_t channel, uint8_t duty_cycle);
void TIM3_PWM(uint8_t channel, uint8_t duty_cycle);
void TIM4_PWM(uint8_t channel, uint8_t duty_cycle);

void draw(uint8_t row, uint8_t col);

//LED mode
void dimming8x8(void);



//LED character
uint8_t A[8] = {0b01111000, 0b10000100, 0b10000100, 0b11111100, 0b10000100, 0b10000100, 0b10000100, 0b00000000};
uint8_t B[8] = {0b11111000, 0b10000100, 0b10000100, 0b11111000, 0b10000100, 0b10000100, 0b11111000, 0b00000000};
uint8_t C[8] = {0b01111000, 0b10000100, 0b10000000, 0b10000000, 0b10000000, 0b10000100, 0b01111000, 0b00000000};
uint8_t D[8] = {0b11111000, 0b10000100, 0b10000100, 0b10000100, 0b10000100, 0b10000100, 0b11111000, 0b00000000};
uint8_t E[8] = {0b11111100, 0b10000000, 0b10000000, 0b11111000, 0b10000000, 0b10000000, 0b11111100, 0b00000000};
uint8_t F[8] = {0b11111100, 0b10000000, 0b10000000, 0b11111000, 0b10000000, 0b10000000, 0b10000000, 0b00000000};
uint8_t G[8] = {0b01111000, 0b10000100, 0b10000000, 0b10011100, 0b10000100, 0b10000100, 0b01111000, 0b00000000};
uint8_t H[8] = {0b10000100, 0b10000100, 0b10000100, 0b11111100, 0b10000100, 0b10000100, 0b10000100, 0b00000000};
uint8_t I[8] = {0b01111000, 0b00110000, 0b00110000, 0b00110000, 0b00110000, 0b00110000, 0b01111000, 0b00000000};
uint8_t J[8] = {0b00001100, 0b00001100, 0b00001100, 0b00001100, 0b10001100, 0b10001100, 0b01111000, 0b00000000};
uint8_t K[8] = {0b10000100, 0b10001000, 0b10010000, 0b11100000, 0b10010000, 0b10001000, 0b10000100, 0b00000000};
uint8_t L[8] = {0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b11111100, 0b00000000};
uint8_t M[8] = {0b10000100, 0b11001100, 0b10110100, 0b10000100, 0b10000100, 0b10000100, 0b10000100, 0b00000000};
uint8_t N[8] = {0b10000100, 0b11000100, 0b10100100, 0b10010100, 0b10001100, 0b10000100, 0b10000100, 0b00000000};
uint8_t O[8] = {0b01111000, 0b10000100, 0b10000100, 0b10000100, 0b10000100, 0b10000100, 0b01111000, 0b00000000};
uint8_t P[8] = {0b11111000, 0b10000100, 0b10000100, 0b11111000, 0b10000000, 0b10000000, 0b10000000, 0b00000000};
uint8_t Q[8] = {0b01111000, 0b10000100, 0b10000100, 0b10000100, 0b10010100, 0b10001100, 0b01111100, 0b00000000};
uint8_t R[8] = {0b11111000, 0b10000100, 0b10000100, 0b11111000, 0b10010000, 0b10001000, 0b10000100, 0b00000000};
uint8_t S[8] = {0b01111000, 0b10000100, 0b10000000, 0b01111000, 0b00000100, 0b10000100, 0b01111000, 0b00000000};
uint8_t T[8] = {0b11111100, 0b00110000, 0b00110000, 0b00110000, 0b00110000, 0b00110000, 0b00110000, 0b00000000};
uint8_t U[8] = {0b10000100, 0b10000100, 0b10000100, 0b10000100, 0b10000100, 0b10000100, 0b01111000, 0b00000000};
uint8_t V[8] = {0b10000100, 0b10000100, 0b10000100, 0b10000100, 0b10000100, 0b01111000, 0b00110000, 0b00000000};
uint8_t W[8] = {0b10000100, 0b10000100, 0b10000100, 0b10000100, 0b10110100, 0b11001100, 0b10000100, 0b00000000};
uint8_t X[8] = {0b10000100, 0b10000100, 0b01111000, 0b00110000, 0b01111000, 0b10000100, 0b10000100, 0b00000000};
uint8_t Y[8] = {0b10000100, 0b10000100, 0b01111000, 0b00110000, 0b00110000, 0b00110000, 0b00110000, 0b00000000};
uint8_t Z[8] = {0b11111100, 0b00001000, 0b00010000, 0b00100000, 0b01000000, 0b10000000, 0b11111100, 0b00000000};





uint8_t *ch[26] = {A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z};
uint8_t *hello[9] = {H,E,L,L,O,V,H,D,L};
int8_t mode = 0;

void setup()
{
  GPIO_begin();
  attachInterrupt(digitalPinToInterrupt(18), next, RISING);
  attachInterrupt(digitalPinToInterrupt(19), prev, RISING);
  Serial.begin(115200);
  byROWbyCol();
}

void loop()
{
  if (mode == 0) dimming8x8(); //mode 0
  if (mode == 1) rainran(); //mode 1
  if (mode == 2) squre(); //mode 2
  //if (mode == 3) squre(); //mode 3
  if (mode == 3) drawAtoZ(); //mode 4
  if (mode == 4) drawHello(); //mode 5
}

void next(void)
{
  mode += 1;
  if (mode > 4)
    mode = 0;
  Serial.println(mode);
}

void prev(void)
{
  mode -= 1;
  if (mode < 0)
    mode = 4;
  Serial.println(mode);
}

void GPIO_begin(void)
{
  DDRA |= 0xff;
  DDRB |= 0x60; //0b0110 0000 PB6, PB5 -> OUTPUT mode
  //DDRD |= 0x0f; //0b0000 1111 PD0, PD1, PD2, PD3 -> OUTPUT mode
  DDRE |= 0x38; //0b0011 1000 PE5, PE4, PE3 -> OUTPUT mode
  DDRH |= 0x38; //0b0011 1011 PH0, PH1, PH3, PH4, PH5 -> OUTPUT mode 
  //DDRJ |= 0x03; //0b0000 0011 PJ0, PJ1 -> OUTPUT mode
}

void TIM1_begin(void)
{
 
  //non-inverting compare output mode COMnX = 10
  //fast PWM mode 10 bits WGM = 0111
  TCCR1A = 0xA3; // 0b1010 0011

  //xxx is prescaler
  /*
  000 = no clk src (timer/couter stopped)
  001 = 1 (no prescaling)
  010 = 8
  011 = 64
  100 = 256
  101 = 1024
  110 and 111 = external clk src from Tn pin
  FOCnxPWM = Fclk / (N * (1 + TOP)) 
  Fclk in ATmega2560 is 16MHz
  TOP is 0x03F because we use 10 bits fast PWM
  FOCnxPWM = 16MHz / (N * 1024)
  if N is 1 = 15.625kHZ,
  N is 8 = 1.953kHz,
  N is 64 = 244.14HZ,
  N is 256 = 61.035 Hz,
  N is 1024 = 15.259 Hz
  */
  TCCR1B = 0x0B; // 0b0000 1xxx -> use 011;

  OCR1A = 0; // 0 - 1023 
  OCR1B = 0;
  /*
    CH_A output at PIN_11
    CH_B output at PIN_12
  */
}

void TIM3_begin(void)
{
  
  TCCR3A = 0xAB; // 0b1010 1011
  TCCR3B = 0x0B; //

  OCR3A = 0;
  OCR3B = 0;
  OCR3B = 0;
  /*
    CH_A output at PIN_5
    CH_B output at PIN_3
    CH_C output at PIN_2
  */
}

void TIM4_begin(void)
{
  TCCR4A = 0xAB; //
  TCCR4B = 0x0B; //

  OCR4A = 0;
  OCR4B = 0;
  OCR4C = 0;
  /*
    CH_A output at PIN_6
    CH_B output at PIN_7
    CH_C output at PIN_8
  */
}


void draw(uint8_t row, uint8_t col)
{
  PORTA &= 0x00;
  PORTB &= 0x00; //0b0110 0000
  PORTH &= 0x00; //0b0011 1000
  PORTE &= 0x00; //0b0011 1000

  //PORTJ &= 0x00; //0b0000 0011
  //PORTH &= 0x00; //0b0000 0011
  //PORTD &= 0x00; //0b0000 1111
  
  if (col == 0) PORTB |= 0x40;
  if (col == 1) PORTB |= 0x20;
  if (col == 2) PORTH |= 0x20;
  if (col == 3) PORTH |= 0x10;
  if (col == 4) PORTH |= 0x08;
  if (col == 5) PORTE |= 0x08;
  if (col == 6) PORTE |= 0x20;
  if (col == 7) PORTE |= 0x10;
  
  if (row == 0) PORTA |= 0x01;
  if (row == 1) PORTA |= 0x02;
  if (row == 2) PORTA |= 0x04;
  if (row == 3) PORTA |= 0x08;
  if (row == 4) PORTA |= 0x10;
  if (row == 5) PORTA |= 0x20;
  if (row == 6) PORTA |= 0x40;
  if (row == 7) PORTA |= 0x80;
}


void dimming8x8(void)
{
  TIM1_begin();
  TIM3_begin();
  TIM4_begin();
  PORTA |= 0xff;
  int i = 0;
  int x = 0;
  int sign = 0;
  uint32_t delay_time = 0;
    //delay(5000);
  while (mode == 0){
    
    OCR1A = x;
    OCR1B = x;

    OCR3A = x;
    OCR3B = x;
    OCR3C = x;

    OCR4A = x;
    OCR4B = x;
    OCR4C = x;
    if(millis() - delay_time > 50)
    {
      Serial.println(x);
      if (sign) i--;
      else i++;
      x = (i/100.0) * (1000);
      delay_time = millis();
    }
    if (i > 100) sign = 1;
    if (i <= 0) sign = 0;
  }
}
void byROWbyCol(void)
{
  //TURN OFF PWM mode
  TCCR1A = 0x00;
  TCCR1B = 0x00;

  TCCR3A = 0x00;
  TCCR3B = 0x00;

  TCCR4A = 0x00;
  TCCR4B = 0x00;
  int row;
  int col;
  //while (mode == 1)
  //{
    for (row = 0; row < 8; row++)
      for (col = 0; col < 8; col++)
      {
        draw(row, col);
        delay(20);
      }
    
    for (col = 7; col >= 0; --col)
    {
      for (row = 7; row >= 0; row--)
      {
        draw(row, col);
        delay(20);
      }
    }
  //}
}



void squre()
{
  uint32_t timer = 0;
  //mini
  while (timer < 10000 && mode == 2)
  {
    draw(3,3);draw(3,4);  // 11
    draw(4,3);draw(4,4);
    timer++;
  }
  timer = 0;
  while (timer < 5000 && mode == 2)
  {
    draw(2,2);draw(2,3);draw(2,4);draw(2,5);
    draw(3,2);                    draw(3,5);
    draw(4,2);                    draw(4,5);
    draw(5,2);draw(5,3);draw(5,4);draw(5,5);
    timer++;
  }
  timer = 0;
  while (timer < 2500 && mode == 2)
  {
    draw(1,1);draw(1,2);draw(1,3);draw(1,4);draw(1,5);draw(1,6);
    draw(2,1);                                        draw(2,6);
    draw(3,1);                                        draw(3,6);
    draw(4,1);                                        draw(4,6);
    draw(5,1);                                        draw(5,6);
    draw(6,1);draw(6,2);draw(6,3);draw(6,4);draw(6,5);draw(6,6);
    timer++;
  }
  timer = 0;
  while (timer < 1750 && mode == 2)
  {
    draw(0,0);draw(0,1);draw(0,2);draw(0,3);draw(0,4);draw(0,5);draw(0,6);draw(0,7);
    draw(1,0);                                                            draw(1,7);
    draw(2,0);                                                            draw(2,7);
    draw(3,0);                                                            draw(3,7);
    draw(4,0);                                                            draw(4,7);
    draw(5,0);                                                            draw(5,7);
    draw(6,0);                                                            draw(6,7);                                                  
    draw(7,0);draw(7,1);draw(7,2);draw(7,3);draw(7,4);draw(7,5);draw(7,6);draw(7,7);
    timer++;
  }
  timer = 0;
  while (timer < 875 && mode == 2)
  {
    draw(0,0);draw(0,1);draw(0,2);draw(0,3);draw(0,4);draw(0,5);draw(0,6);draw(0,7);
    draw(1,0);                                                            draw(1,7);
    draw(2,0);                                                            draw(2,7);
    draw(3,0);                                                            draw(3,7);
    draw(4,0);                                                            draw(4,7);
    draw(5,0);                                                            draw(5,7);
    draw(6,0);                                                            draw(6,7);                                                  
    draw(7,0);draw(7,1);draw(7,2);draw(7,3);draw(7,4);draw(7,5);draw(7,6);draw(7,7);
    draw(1,1);draw(1,2);draw(1,3);draw(1,4);draw(1,5);draw(1,6);
    draw(2,1);                                        draw(2,6);
    draw(3,1);                                        draw(3,6);
    draw(4,1);                                        draw(4,6);
    draw(5,1);                                        draw(5,6);
    draw(6,1);draw(6,2);draw(6,3);draw(6,4);draw(6,5);draw(6,6);
    
    timer++;
  }
  timer = 0;
  while (timer < 415 && mode == 2)
  {
    draw(0,0);draw(0,1);draw(0,2);draw(0,3);draw(0,4);draw(0,5);draw(0,6);draw(0,7);
    draw(1,0);                                                            draw(1,7);
    draw(2,0);                                                            draw(2,7);
    draw(3,0);                                                            draw(3,7);
    draw(4,0);                                                            draw(4,7);
    draw(5,0);                                                            draw(5,7);
    draw(6,0);                                                            draw(6,7);                                                  
    draw(7,0);draw(7,1);draw(7,2);draw(7,3);draw(7,4);draw(7,5);draw(7,6);draw(7,7);
    draw(1,1);draw(1,2);draw(1,3);draw(1,4);draw(1,5);draw(1,6);
    draw(2,1);                                        draw(2,6);
    draw(3,1);                                        draw(3,6);
    draw(4,1);                                        draw(4,6);
    draw(5,1);                                        draw(5,6);
    draw(6,1);draw(6,2);draw(6,3);draw(6,4);draw(6,5);draw(6,6);
    draw(2,2);draw(2,3);draw(2,4);draw(2,5);
    draw(3,2);                    draw(3,5);
    draw(4,2);                    draw(4,5);
    draw(5,2);draw(5,3);draw(5,4);draw(5,5);
    timer++;
  }
  timer = 0;
  while (timer < 205 && mode == 2)
  {
    draw(0,0);draw(0,1);draw(0,2);draw(0,3);draw(0,4);draw(0,5);draw(0,6);draw(0,7);
    draw(1,0);                                                            draw(1,7);
    draw(2,0);                                                            draw(2,7);
    draw(3,0);                                                            draw(3,7);
    draw(4,0);                                                            draw(4,7);
    draw(5,0);                                                            draw(5,7);
    draw(6,0);                                                            draw(6,7);                                                  
    draw(7,0);draw(7,1);draw(7,2);draw(7,3);draw(7,4);draw(7,5);draw(7,6);draw(7,7);
    draw(1,1);draw(1,2);draw(1,3);draw(1,4);draw(1,5);draw(1,6);
    draw(2,1);                                        draw(2,6);
    draw(3,1);                                        draw(3,6);
    draw(4,1);                                        draw(4,6);
    draw(5,1);                                        draw(5,6);
    draw(6,1);draw(6,2);draw(6,3);draw(6,4);draw(6,5);draw(6,6);
    draw(2,2);draw(2,3);draw(2,4);draw(2,5);
    draw(3,2);                    draw(3,5);
    draw(4,2);                    draw(4,5);
    draw(5,2);draw(5,3);draw(5,4);draw(5,5);
    draw(3,3);draw(3,4);  // 11
    draw(4,3);draw(4,4);
    timer++;
  }
}

void rainran()
{
  //TURN OFF PWM mode
  TCCR1A = 0x00;
  TCCR1B = 0x00;

  TCCR3A = 0x00;
  TCCR3B = 0x00;

  TCCR4A = 0x00;
  TCCR4B = 0x00;
    int row;
    int n;
    int col;
  while (mode == 1)
  {
    n = random(0,3);
    col = random(0,7);
    for(row = 0; row < 8; row++)
    {
      for(int i = 0; i < n; i++)
      {
        draw(row + i, col); 
        delay(50);
      }
    }
  }
}

//0b0010 1000 0b00010100
int drawBuffer(uint8_t buffer[8])
{
  uint8_t *temp = buffer;
  uint8_t x = 0;
  uint32_t time = 0;
  while (x < 8 && (mode == 3 || mode == 4))
  {
    for (uint8_t i = 0; i < 8; i++)
    { 
      for (uint8_t j = 0; j < 8; j++)
      {
        if ((temp[i] >> (j + x)) & 0x01)
          draw(i, 7 - j);
        delayMicroseconds(100);
      }
    }
    if (millis() - time > 100)
    {
      time = millis();
      x++;
    }
  }
  return (1);
}

void drawAtoZ(void)
{
  //TURN OFF PWM mode
  TCCR1A = 0x00;
  TCCR1B = 0x00;

  TCCR3A = 0x00;
  TCCR3B = 0x00;

  TCCR4A = 0x00;
  TCCR4B = 0x00;
  int i = 0;
  while (mode == 3)
  {
    if (drawBuffer(ch[i])) i++;
    if (i > 25) i = 0;  
  }
}

void drawHello(void)
{
  //TURN OFF PWM mode
  TCCR1A = 0x00;
  TCCR1B = 0x00;

  TCCR3A = 0x00;
  TCCR3B = 0x00;

  TCCR4A = 0x00;
  TCCR4B = 0x00;
  int i = 0;
  while (mode == 4)
  {
    if (drawBuffer(hello[i])) i++;
    if (i > 8) i = 0;
  }
}

