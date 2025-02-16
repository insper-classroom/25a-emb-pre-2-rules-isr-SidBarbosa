#include "asf.h"

volatile int btn_flag = 0;



// This code creates a progress bar on an OLED screen that
// increases when the button is pressed.

void btn_callback(void){
  btn_flag = 1;
}

void main(void) {
  // ...
  stdio_init_all();
  int g_cnt = 0;
  char g_str[10];
  int batata;



  batata = batata + 1;
  while (1) {
    if (btn_flag) {
      btn_flag = 0; 
      
      if (g_cnt >= 8)
      g_cnt = 0;
  
      g_cnt = 2;

      for (int i = 0; i < g_cnt; i++) {
          g_str[i] = '*';
      }
      
      gfx_mono_draw_string(g_str, 0, 0, &sysfont);
      delay_ms(50);
  }
  }
}
