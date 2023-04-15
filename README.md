# OGC.Engineering
## ogc_hw_thermal_inspection_tool
Developer contact - dustin < at > ogc.engineering

---
### Location:

- Hardware Definition:
    - location: hardware/ogc-hw-thermal_inspection_tool/
    - repo: https://github.com/OGC-dustin/ogc_hw_thermal_inspection_tool

---
### Hardware:

- Development Based on the TI Lanchpad EK-TM4C123GXL ( https://www.ti.com/tool/EK-TM4C123GXL )
- CPU - TM4C123GH6PM ( https://www.ti.com/product/TM4C123GH6PM )
    - 32-bit ARM Cortex-M4F runing at 80 MHz
    - 256 kB Flash
    - 32 kB SRAM
- User interface ( UI ) daughter board
    - Display - Adafruit 1.5" SSD1351 128 x 128 RGB OLED
    - Controls - RGB Encoder with click
- Sensor daughter board
    - Color camera -  OV7670
    - Lighting ring - 24 NeoPixel ring
    - Thermal camera - MLX90640
    - LIDAR distance sensor - Garmin LIDAR-Lite v3

---
### Resources:

- Power Analysis
    - Sources
        - 3.3 VDC (300 mA max)
        - 5.0 VDC (depends on 3.3 VDC usage, 23 mA to 323 mA)
    - Loads
        - OLED at Full Brightness   ( 3v3 internal ) [ 42 mA ]
        - Encoder RGB               ( 3v3 internal ) [ assume 60 mA max if we run 20 mA each ( balance light output down from here ) ]
        - Color Camera              ( ?? ) [ 18 mA ( 24 MHz at 30 FPS YUV output, no IO loading ) ]
        - Thermal Camera            ( ?? ) [ 23 mA ]
        - LIDAR                     ( ?? ) [ 135 mA continuous Operation ]
        - NeoPixel Ring             ( 5v external needed )[ 50 mA max * 24 ]

```
Pin Mapping J1:
    [3v3]
    [PB5] - [ GPIO ] Camera Data Port
    [PB0] - [ GPIO ] Camera Data Port
    [PB1] - [ GPIO ] Camera Data Port
    [PE4] - [ U5_RX/CAN0RX ] Debug/Control Serial
    [PE5] - [ U5_TX/CAN0TX ] Debug/Control Serial
    [PB4] - [ GPIO ] Camera Data Port
    [PA5] - [ GPIO ] SD Card Detect
    [PA6] - [ I2C1_SCL ] I2C1_SCL Common to Camera, IR Sensor and LIDAR
    [PA7] - [ I2C1_SDA ] I2C1_SDA Common to Camera, IR Sensor and LIDAR

Pin Mapping J2:
    [GND]
    [PB2] - [ GPIO ] Camera Data Port
    [PE0] - [ GPIO ] Camera Reset
    [PF0] - [ GPIO ] UI Button SW2 ( R ) [ Encoder Phase B ]
    [RST]
    [PB7] - [ GPIO ] Camera Data Port
    [PB6] - [ GPIO ] Camera Data Port
    [PA4] - [ GPIO ] Lidar Mode
    [PA3] - [ GPIO ] LIDAR Enable
    [PA2] - [ GPIO ] Neo Pixel Data Out

Pin Mapping J3:
    [VBUS]
    [GND]
    [PD0] - [ SSI3_CLK ] SPI_CLK Common to Display and SD Card
    [PD1] - [ GPIO ] SD Card Chip Select
    [PD2] - [ SSI3_RX ] SPI_MISO Common to Display and SD Card
    [PD3] - [ SSI3_TX ] SPI_MOSI Common to Display and SD Card
    [PE1] - [ GPIO ] Display Chip Select
    [PE2] - [ GPIO ] Display Reset
    [PE3] - [ GPIO ] Display Data/Command Select
    [PF1] - [ M1PWM5 ] UI RGB LED ( RED )

Pin Mapping J4:
    [PF2] - [ M1PWM6 ] UI RGB LED ( BLUE )
    [PF3] - [ M1PWM7 ] UI RGB LED ( GREEN )
    [PB3] - [ GPIO ] Camera Data Port
    [PC4] - [ GPIO ] Camera VSYNC
    [PC5] - [ GPIO ] Camera HREF
    [PC6] - [ GPIO ] Camera PCLK
    [PC7] - [ GPIO ] Camera XCLK
    [PD6] - [ GPIO ] Camera Power Down
    [PD7] - [ NMI ] [ Encoder Click/Select Button ]
    [PF4] - [ GPIO ] UI Button SW1 ( L ) [ Encoder Phase A ]

```