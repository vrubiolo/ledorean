

//#define PROGMEM 

// How many leds in your strip?
#define NUM_LEDS 49

// For led chips like Neopixels, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806, define both DATA_PIN and CLOCK_PIN
#define DATA_PIN 12

#define NB_COLS 7
#define NB_ROWS 7
#define BITMAP_LEN NB_COLS * NB_ROWS

#define NB_ELEM(array) (sizeof (array) / sizeof(array[0]))

// Define the array of leds
CRGB leds[NUM_LEDS];

char font_buffer [BITMAP_LEN] = {0};

const char font_clear [BITMAP_LEN] PROGMEM = {
  0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,
  0,0,0,0,0,0,0
};

const char font_a [BITMAP_LEN] PROGMEM = {
  1,1,1,1,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,1,1,1,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0
};

const char font_b [BITMAP_LEN] PROGMEM = {
  1,1,1,0,0,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,1,1,1,0,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,1,1,1,0,0,0
};

const char font_c [BITMAP_LEN] PROGMEM = {
  1,1,1,1,1,0,0,
  1,0,0,0,0,0,0,
  1,0,0,0,0,0,0,
  1,0,0,0,0,0,0,
  1,0,0,0,0,0,0,
  1,0,0,0,0,0,0,
  1,1,1,1,1,0,0
};

const char font_d[BITMAP_LEN] PROGMEM = {
  1,1,1,1,0,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,1,1,1,0,0,0
};

const char font_e [BITMAP_LEN] PROGMEM = {
  1,1,1,1,1,0,0,
  1,0,0,0,0,0,0,
  1,0,0,0,0,0,0,
  1,1,1,1,0,0,0,
  1,0,0,0,0,0,0,
  1,0,0,0,0,0,0,
  1,1,1,1,1,0,0
};

const char font_f [BITMAP_LEN] PROGMEM = {
  1,1,1,1,1,0,0,
  1,0,0,0,0,0,0,
  1,0,0,0,0,0,0,
  1,1,1,1,0,0,0,
  1,0,0,0,0,0,0,
  1,0,0,0,0,0,0,
  1,0,0,0,0,0,0
};

const char font_g [BITMAP_LEN] PROGMEM = {
  0,1,1,1,0,0,0,
  1,0,0,0,0,0,0,
  1,0,0,0,0,0,0,
  1,0,1,1,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  0,1,1,1,1,0,0
};

const char font_h [BITMAP_LEN] PROGMEM = {
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,1,1,1,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0
};

const char font_i [BITMAP_LEN] PROGMEM = {
  1,1,1,1,1,0,0,
  0,0,1,0,0,0,0,
  0,0,1,0,0,0,0,
  0,0,1,0,0,0,0,
  0,0,1,0,0,0,0,
  0,0,1,0,0,0,0,
  1,1,1,1,1,0,0
};

const char font_j[BITMAP_LEN] PROGMEM = {
  1,1,1,1,1,0,0,
  0,0,0,1,0,0,0,
  0,0,0,1,0,0,0,
  0,0,0,1,0,0,0,
  0,0,0,1,0,0,0,
  0,0,0,1,0,0,0,
  1,1,1,0,0,0,0
};

const char font_k[BITMAP_LEN] PROGMEM = {
  1,0,0,0,1,0,0,
  1,0,0,1,0,0,0,
  1,0,1,0,0,0,0,
  1,1,0,0,0,0,0,
  1,0,1,0,0,0,0,
  1,0,0,1,0,0,0,
  1,0,0,0,1,0,0
};

const char font_l [BITMAP_LEN] PROGMEM = {
  1,0,0,0,0,0,0,
  1,0,0,0,0,0,0,
  1,0,0,0,0,0,0,
  1,0,0,0,0,0,0,
  1,0,0,0,0,0,0,
  1,0,0,0,0,0,0,
  1,1,1,1,1,0,0
};

const char font_m [BITMAP_LEN] PROGMEM = {
  1,0,0,0,1,0,0,
  1,1,0,1,1,0,0,
  1,0,1,0,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0
};

const char font_n [BITMAP_LEN] PROGMEM = {
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,1,0,0,1,0,0,
  1,0,1,0,1,0,0,
  1,0,0,1,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0
};

const char font_o [BITMAP_LEN] PROGMEM = {
  0,1,1,1,0,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  0,1,1,1,0,0,0
};

const char font_p [BITMAP_LEN] PROGMEM = {
  1,1,1,1,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,1,1,1,1,0,0,
  1,0,0,0,0,0,0,
  1,0,0,0,0,0,0,
  1,0,0,0,0,0,0
};

const char font_q [BITMAP_LEN] PROGMEM = {
  0,1,1,1,0,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,1,0,0,0,
  0,1,1,0,1,0,0
};

const char font_r [BITMAP_LEN] PROGMEM = {
  1,1,1,1,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,1,1,1,1,0,0,
  1,0,1,0,0,0,0,
  1,0,0,1,0,0,0,
  1,0,0,0,1,0,0
};

const char font_s [BITMAP_LEN] PROGMEM = {
  0,1,1,1,1,0,0,
  1,0,0,0,0,0,0,
  0,1,0,0,0,0,0,
  0,0,1,0,0,0,0,
  0,0,0,1,0,0,0,
  0,0,0,0,1,0,0,
  1,1,1,1,0,0,0
};

const char font_t [BITMAP_LEN] PROGMEM = {
  1,1,1,1,1,0,0,
  0,0,1,0,0,0,0,
  0,0,1,0,0,0,0,
  0,0,1,0,0,0,0,
  0,0,1,0,0,0,0,
  0,0,1,0,0,0,0,
  0,0,1,0,0,0,0
};

const char font_u [BITMAP_LEN] PROGMEM = {
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  0,1,1,1,0,0,0
};

const char font_v [BITMAP_LEN] PROGMEM = {
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  0,1,0,1,0,0,0,
  0,0,1,0,0,0,0,
  0,0,1,0,0,0,0
};

const char font_w [BITMAP_LEN] PROGMEM = {
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,0,1,0,1,0,0,
  1,0,1,0,1,0,0,
  1,0,1,0,1,0,0,
  0,1,1,1,0,0,0
};

const char font_x [BITMAP_LEN] PROGMEM = {
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,1,0,1,1,0,0,
  0,0,1,0,0,0,0,
  1,1,0,1,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0
};

const char font_y [BITMAP_LEN] PROGMEM = {
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  0,1,0,1,0,0,0,
  0,0,1,0,0,0,0,
  0,0,1,0,0,0,0,
  0,0,1,0,0,0,0
};

const char font_z [BITMAP_LEN] PROGMEM = {
  1,1,1,1,1,0,0,
  0,0,0,0,1,0,0,
  0,0,0,1,0,0,0,
  0,0,1,0,0,0,0,
  0,1,0,0,0,0,0,
  0,1,0,0,0,0,0,
  1,1,1,1,1,0,0
};

const char font_qmark [BITMAP_LEN] PROGMEM = {
  0,1,1,1,0,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  0,0,0,1,0,0,0,
  0,0,1,0,0,0,0,
  0,0,0,0,0,0,0,
  0,0,1,0,0,0,0
};

const char font_exmark [BITMAP_LEN] PROGMEM = {
  0,0,0,1,0,0,0,
  0,0,0,1,0,0,0,
  0,0,0,1,0,0,0,
  0,0,0,1,0,0,0,
  0,0,0,0,0,0,0,
  0,0,0,1,0,0,0,
  0,0,0,1,0,0,0
};

const char font_finger [BITMAP_LEN] PROGMEM = {
  0,0,0,1,0,0,0,
  0,0,1,1,1,0,0,
  0,0,1,0,1,0,0,
  0,0,1,0,1,0,0,
  1,1,1,0,1,1,1,
  1,0,1,0,1,0,1,
  0,1,1,1,1,1,1
};

const char font_happy [BITMAP_LEN] PROGMEM = {
  0,0,0,0,0,0,0,
  0,1,0,0,0,1,0,
  0,0,0,0,0,0,0,
  0,0,0,1,0,0,0,
  1,0,0,1,0,0,1,
  0,1,0,0,0,1,0,
  0,1,1,1,1,1,0
};

//const char font_0 [BITMAP_LEN] PROGMEM = {
//  0,1,1,1,0,0,0,
//  1,0,0,1,1,0,0,
//  1,0,1,0,1,0,0,
//  1,0,1,0,1,0,0,
//  1,0,1,0,1,0,0,
//  1,1,0,0,1,0,0,
//  0,1,1,1,0,0,0
//};
//
//const char font_1 [BITMAP_LEN] PROGMEM = {
//  0,0,1,0,0,0,0,
//  0,1,1,0,0,0,0,
//  1,0,1,0,0,0,0,
//  0,0,1,0,0,0,0,
//  0,0,1,0,0,0,0,
//  0,0,1,0,0,0,0,
//  1,1,1,1,1,0,0
//};
//
//const char font_2 [BITMAP_LEN] PROGMEM = {
//  0,1,1,1,0,0,0,
//  1,0,0,0,1,0,0,
//  1,0,0,0,1,0,0,
//  0,0,0,1,0,0,0,
//  0,0,1,0,0,0,0,
//  0,1,0,0,0,0,0,
//  1,1,1,1,1,0,0
//};
//
//const char font_3 [BITMAP_LEN] PROGMEM = {
//  0,1,1,1,0,0,0,
//  1,0,0,0,1,0,0,
//  0,0,0,0,1,0,0,
//  0,1,1,1,0,0,0,
//  0,0,0,0,1,0,0,
//  1,0,0,0,1,0,0,
//  0,1,1,1,0,0,0
//};
//
//const char font_4 [BITMAP_LEN] PROGMEM = {
//  0,0,0,1,1,0,0,
//  0,0,1,0,1,0,0,
//  0,1,0,0,1,0,0,
//  1,1,1,1,1,0,0,
//  0,0,0,0,1,0,0,
//  0,0,0,0,1,0,0,
//  0,0,0,0,1,0,0
//};
//
//const char font_5 [BITMAP_LEN] PROGMEM = {
//  0,0,0,0,0,0,0,
//  0,0,0,0,0,0,0,
//  0,0,0,0,0,0,0,
//  0,0,0,0,0,0,0,
//  0,0,0,0,0,0,0,
//  0,0,0,0,0,0,0,
//  0,0,0,0,0,0,0
//};
//
//const char font_6 [BITMAP_LEN] PROGMEM = {
//  0,0,0,0,0,0,0,
//  0,0,0,0,0,0,0,
//  0,0,0,0,0,0,0,
//  0,0,0,0,0,0,0,
//  0,0,0,0,0,0,0,
//  0,0,0,0,0,0,0,
//  0,0,0,0,0,0,0
//};
//
//const char font_7 [BITMAP_LEN] PROGMEM = {
//  0,0,0,0,0,0,0,
//  0,0,0,0,0,0,0,
//  0,0,0,0,0,0,0,
//  0,0,0,0,0,0,0,
//  0,0,0,0,0,0,0,
//  0,0,0,0,0,0,0,
//  0,0,0,0,0,0,0
//};
//
const char font_8 [BITMAP_LEN] PROGMEM = {
  0,1,1,1,0,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  0,1,1,1,0,0,0,
  1,0,0,0,1,0,0,
  1,0,0,0,1,0,0,
  0,1,1,1,0,0,0
};
//
//const char font_9 [BITMAP_LEN] PROGMEM = {
//  0,0,0,0,0,0,0,
//  0,0,0,0,0,0,0,
//  0,0,0,0,0,0,0,
//  0,0,0,0,0,0,0,
//  0,0,0,0,0,0,0,
//  0,0,0,0,0,0,0,
//  0,0,0,0,0,0,0
//};

const char * font_letters [] = {
  font_a, font_b, font_c, font_d, font_e, font_f, font_g, font_h,
  font_i, font_j, font_k, font_l, font_m, font_n, font_o, font_p,
  font_q, font_r, font_s, font_t, font_u, font_v, font_w, font_x,
  font_y, font_z
};

const char * font_syms [] = {
  font_finger, font_happy
};

// Note that the source bitmap is supposed to be in FLASH mem
void copyBitmap (const char * bitmap) {
  for (int idx = 0; idx < BITMAP_LEN; idx ++) {
    font_buffer[idx] = pgm_read_byte_near(&bitmap[idx]);
//      font_buffer[idx] = bitmap[idx];
  }
}

void clearScreen () {
  drawBitmap (font_clear, CRGB::Black);
}

void dumpBitmap() {
  int jdx = 0;
  for (int idx = 0; idx < BITMAP_LEN; idx ++) {
      if (font_buffer[idx] == 0) {
            Serial.print(" ");
      } else {
            Serial.print("X");
      }
      
      jdx++;
      if (jdx % 7 == 0) {
        Serial.println();
      }
  }
  Serial.println();
}

void bitmapToLeds(CRGB color) {
  //Serial.println("Entering bitmapToLeds");
  for (int idx = 0; idx < BITMAP_LEN; idx ++) {
    //Serial.println("Loop start");
    if (font_buffer[idx] == 1) {
      //Serial.println("Lighting");
      lightLED (idx, color);
    } else {
      //Serial.println("Muting");
      muteLED(idx);
    }
  }
  //Serial.println ("About to show");
  FastLED.show();
}

void drawBitmap (const char * bitmap, CRGB color) {
  copyBitmap (bitmap);
  //dumpBitmap();
  bitmapToLeds(color);
}

void drawCharBitmap (char c) {
  const char * bitmap;
  
  c = tolower(c);
  
  if (c == '!') {
    bitmap = font_exmark;
  } else if (c == ' ') {
    bitmap = font_clear;
  } else if (c == '8') {
    bitmap = font_8;
  } else if (c < 97 || c > 122)
    {
//    Serial.print ("Unsupported character '");
//    Serial.print (c);
//    Serial.println ("'");
    bitmap = font_qmark;
    }
  else
    {  
    int charCode = (int) c - 97;
    bitmap = font_letters[charCode];
    }

//  Serial.print("Drawing '");
//  Serial.print(c);
//  Serial.print("' - ");
//  Serial.print((int) c);
//  Serial.print(" [");
//  Serial.print(charCode);
//  Serial.println("]");
  
  drawBitmap(bitmap, CRGB::Blue);
  delay(500);
}

void drawFinger () {
  for (int idx = 0; idx < 3; idx++) {  
    drawBitmap (font_syms[0], CRGB::Red);
    delay(20);
    clearScreen ();
  }
}

void drawHappy () {
  drawBitmap (font_syms[1], CRGB::Green);
  delay(500);
}

void drawWord (char str[]) {
  for (short idx = 0; idx < strlen(str); idx ++) {
    drawChar (str[idx]);
   }
//  clearScreen ();
}

void fontTest () {
  drawChar ('a');
  drawChar ('b');
  drawChar ('c');
  drawChar ('d');
  drawChar ('e');
  drawChar ('f');
  drawChar ('g');
  drawChar ('h');
  drawChar ('i');
  drawChar ('j');
  drawChar ('k');
  drawChar ('l');
  drawChar ('m');
  drawChar ('n');
  drawChar ('o');
  drawChar ('p');
  drawChar ('q');
  drawChar ('r');
  drawChar ('s');
  drawChar ('t');
  drawChar ('u');
  drawChar ('v');
  drawChar ('w');
  drawChar ('x');
  drawChar ('y');
  drawChar ('z');
}

void wordTest () {
  drawWord ("hello");
  drawWord ("Hello");
  drawWord ("Hi 123");
}

void symsTest () {
  drawFinger ();
  delay(1000);
  drawHappy();
  delay(1000);
}

void printOk () {
  drawWord ("OK");
  delay(1000);
}

void ledTest () {
  // fontTest();
  wordTest();
  symsTest();
}

void lightLED (int ledIdx, CRGB color) {
//Serial.print("Lighting LED ");
  //Serial.println(ledIdx);
  leds[ledIdx] = color;
  //FastLED.show();
}

void muteLED (int ledIdx) {
//  Serial.print("Muting LED ");
  //Serial.println(ledIdx);
  leds[ledIdx] = CRGB::Black;
}

#define BIT_IS_SET(val, bitIndex) (val & (1 << bitIndex))

// Dumps the 5 columns of the font in hex
void fontHexDump (char c) {
  Serial.println("Font dump");
  for (int idx = 0; idx < 5; idx++) {
    Serial.print(pgm_read_byte_near(&font[5*c + idx]),HEX);
    Serial.print(", ");
  }
  Serial.println("");
}

void lightColumn (byte colNb, byte value) {
  char rowIdx[NB_COLS] = {0, 7, 14, 21, 28, 35, 42};
  
//  Serial.print ("Lighting column ");
//  Serial.println(colNb);
  for (int bitIdx = 0; bitIdx < 7; bitIdx++) {
    if (BIT_IS_SET (value, bitIdx)) {
      lightLED(rowIdx[bitIdx] + colNb, CRGB::Green);
    } else {
      muteLED(rowIdx[bitIdx] + colNb);
    }
  }
  FastLED.show();
}

void muteColumn (byte colNb) {
  char rowIdx[NB_COLS] = {0, 7, 14, 21, 28, 35, 42};
  
//  Serial.print ("Muting column ");
//  Serial.println(colNb);
  for (int bitIdx = 0; bitIdx < 7; bitIdx++) {
    muteLED(rowIdx[bitIdx] + colNb);
  }
  FastLED.show();
}

void drawChar (char c) {
  for (int colIdx = 0; colIdx < 5; colIdx++) {
    lightColumn (colIdx, pgm_read_byte_near(&font[c*5 + colIdx]));
  }
  delay(500);
}

void scrollChar (char c) {
  byte offset = 0;
  
  for (int scrollIdx = 0; scrollIdx < 7; scrollIdx++) {
    if (scrollIdx <= 2) {
      offset = 0;
    } else {
      offset = scrollIdx - 2;
    }
    
    for (int colIdx = 0; colIdx < 5 - offset; colIdx++) {
      lightColumn (colIdx + scrollIdx, pgm_read_byte_near(&font[c*5 + colIdx]));
    }
    delay(100);
    muteColumn (scrollIdx);
  }
}

void ledstrip_setup () {
    Serial.begin(9600);
    FastLED.addLeds<TM1804, DATA_PIN, GRB>(leds, NUM_LEDS);
}

void ledstrip_loop () {
  char incomingByte = 0;
  
  if(Serial.available() > 0) {
    incomingByte = Serial.read();
    Serial.print ("Read from Serial: ");
    Serial.println (incomingByte);
    
    drawChar (incomingByte);
    scrollChar (incomingByte);
  }
}
