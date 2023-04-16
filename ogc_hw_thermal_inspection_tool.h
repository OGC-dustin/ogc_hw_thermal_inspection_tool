#ifndef OGC_HW_THERMAL_INSPECTION_TOOL_H
#define OGC_HW_THERMAL_INSPECTION_TOOL_H

/* Development project built on the TI EK-TM4C123GXL Launchpad platform */

/* =====================================================================================================================
 *                                                                                                             Processor
 * =====================================================================================================================
 */
/*                                                                              Processor - TI Tiva C Series TM4C123G */
#define HW_SYS_CPU_TM4C123G                     ( 1U ) /* safety check must match firmware csp selection */

/* =====================================================================================================================
 *                                                                                                                Clocks
 * =====================================================================================================================
 */
/*                                                                                            Clock - External 32 kHz */
#define HW_SYS_CLOCK_XT1                        ( 1U ) /* trigger to configure external clock */
#define HW_SYS_CLOCK_XT1_SPEED                  ( 32768U ) /* RTCC clock */

/*                                                                                            Clock - External 16 MHz */
#define HW_SYS_CLOCK_XT2                        ( 1U ) /* trigger to configure external clock */
#define HW_SYS_CLOCK_XT2_SPEED                  ( 16000000U ) /* 16 MHz system clock */

/* =====================================================================================================================
 *                                                                                                        User Interface
 * =====================================================================================================================
 */
/*                                           User Interface - RGB LED ( Simple via GPIO or Advanced control via PWM ) */
#define HW_UI_INDICATOR_STATUS_MULTI            ( 1U ) /* indicate use of of RGB LED for multi color status indicator */
#define HW_UI_RGB_RED_PORT                      ( GPIO_PORTF_BASE )
#define HW_UI_RGB_RED_PIN                       ( GPIO_PIN_1 )
#define HW_UI_RGB_RED_POL                       ( 1U ) /* invert polarity ( active_low ) */
#define HW_UI_RGB_BLUE_PORT                     ( GPIO_PORTF_BASE )
#define HW_UI_RGB_BLUE_PIN                      ( GPIO_PIN_2 )
#define HW_UI_RGB_BLUE_POL                      ( 1U ) /* invert polarity ( active_low ) */
#define HW_UI_RGB_GREEN_PORT                    ( GPIO_PORTF_BASE )
#define HW_UI_RGB_GREEN_PIN                     ( GPIO_PIN_3 )
#define HW_UI_RGB_GREEN_POL                     ( 1U ) /* invert polarity ( active_low ) */

#define HW_UI_ENCODER_DUAL_WITH_CLICK           ( 1U ) /* indicate family of control type for user input */
#define HW_UI_SOFT_DEBOUNCE_NEEDED              ( 1U ) /* TODO: determine if need for pin specific debounce need? */
/*                                                                        User Interface - Encoder Phase A ( Button ) */
#define HW_UI_ENCODER_A_PORT                    ( GPIO_PORTF_BASE )
#define HW_UI_ENCODER_A_PIN                     ( GPIO_PIN_4 )

/*                                                                        User Interface - Encoder Phase B ( Button ) */
#define HW_UI_ENCODER_B_PORT                    ( GPIO_PORTF_BASE )
#define HW_UI_ENCODER_B_PIN                     ( GPIO_PIN_0 )

/*                                                                          User Interface - Encoder Click ( Button ) */
#define HW_UI_ENCODER_CLICK_PORT                ( GPIO_PORTD_BASE )
#define HW_UI_ENCODER_CLICK_PIN                 ( GPIO_PIN_7 )

/*                                                                                      User Interface - Serial Comms */
#define HW_SERIAL_RX_PORT                       ( GPIO_PORTE_BASE )
#define HW_SERIAL_RX_PIN                        ( GPIO_PIN_4 )
#define HW_SERIAL_TX_PORT                       ( GPIO_PORTE_BASE )
#define HW_SERIAL_TX_PIN                        ( GPIO_PIN_5 )

/*                                                                                      User Interface - OLED Display */
#define DISPLAY_COUNT                           ( 1U ) /* one display for the application to track */
#define DISPLAY_0_WIDTH                         ( 128U ) /* 128 pixels wide */
#define DISPLAY_0_HEIGHT                        ( 128U ) /* 128 pixel tall */
#define DISPLAY_0_DEPTH                         ( 16U ) /* 16 bit ( 65k Colors ) */
#define DISPLAY_0_ORIENTATION                   ( 0U ) /* no rotation or flip */
#define HW_UI_OLED_SELECT_PORT                  ( GPIO_PORTE_BASE )
#define HW_UI_OLED_SELECT_PIN                   ( GPIO_PIN_1 )
#define HW_UI_OLED_SELECT_POL                   ( 0U ) /* normal polarity ( active high ) */
#define HW_UI_OLED_DATACOMMAND_PORT             ( GPIO_PORTE_BASE )
#define HW_UI_OLED_DATACOMMAND_PIN              ( GPIO_PIN_3 )
#define HW_UI_OLED_DATACOMMAND_POL              ( 0U ) /* normal polarity ( active high ) */
#define HW_UI_OLED_RST_PORT                     ( GPIO_PORTE_BASE )
#define HW_UI_OLED_RST_PIN                      ( GPIO_PIN_2 )
#define HW_UI_OLED_RST_POL                      ( 0U ) /* normal polarity ( active high ) */

/*                                                                                           User Interface - SD Card */
#define HW_UI_SD_CARD_SELECT_PORT               ( GPIO_PORTD_BASE )
#define HW_UI_SD_CARD_SELECT_PIN                ( GPIO_PIN_1 )
#define HW_UI_SD_CARD_SELECT_POL                ( 0U ) /* normal polarity ( active high ) */
#define HW_UI_SD_CARD_DETECT_PORT               ( GPIO_PORTA_BASE )
#define HW_UI_SD_CARD_DETECT_PIN                ( GPIO_PIN_5 )
#define HW_UI_SD_CARD_DETECT_POL                ( 0U ) /* normal polarity ( active high ) */
/* =====================================================================================================================
 *                                                                                                               Sensors
 * =====================================================================================================================
 */
#define CAMERA_COUNT                            ( 3U ) /* treat all sensors as cameras for the application to track */

/*                                                                                               Sensors - RGB Camera */
#define CAMERA_0_WIDTH                          ( 656U )
#define CAMERA_0_HEIGHT                         ( 488U )
#define CAMERA_0_DEPTH                          ( 16U ) /* 16 bit color ( 64k ) */
#define CAMERA_0_RATE                           ( 30U ) /* 30 fps */
#define HW_SENSOR_RGB_CAM_I2C_ADDR              ( 0x00 ) /* TODO: verify datasheet documentation */
#define HW_SENSOR_RGB_CAM_DATA_PORT             ( GPIO_PORTB_BASE )
#define HW_SENSOR_RGB_CAM_VSYNC_PORT            ( GPIO_PORTC_BASE )
#define HW_SENSOR_RGB_CAM_VSYNC_PIN             ( GPIO_PIN_4 )
#define HW_SENSOR_RGB_CAM_HREF_PORT             ( GPIO_PORTC_BASE )
#define HW_SENSOR_RGB_CAM_HREF_PIN              ( GPIO_PIN_5 )
#define HW_SENSOR_RGB_CAM_PCLK_PORT             ( GPIO_PORTC_BASE )
#define HW_SENSOR_RGB_CAM_PCLK_PIN              ( GPIO_PIN_6 )
#define HW_SENSOR_RGB_CAM_XCLK_PORT             ( GPIO_PORTC_BASE )
#define HW_SENSOR_RGB_CAM_XCLK_PIN              ( GPIO_PIN_7 )
#define HW_SENSOR_RGB_CAM_PWDN_PORT             ( GPIO_PORTD_BASE )
#define HW_SENSOR_RGB_CAM_PWDN_PIN              ( GPIO_PIN_6 )
#define HW_SENSOR_RGB_CAM_RST_PORT              ( GPIO_PORTE_BASE )
#define HW_SENSOR_RGB_CAM_RST_PIN               ( GPIO_PIN_0 )

/*                                                                                                Sensors - IR Camera */
#define CAMERA_1_WIDTH                          ( 32U )
#define CAMERA_1_HEIGHT                         ( 24U )
#define CAMERA_1_DEPTH                          ( 16U ) /* 16 bit color ( 64k ) */
#define CAMERA_1_RATE                           ( 64U ) /* 64 Hz max rate */
#define HW_SENSOR_IR_CAM_I2C_ADDR               ( 0x33 ) /* programmable 0x01 to 0xff */

/*                                                                                                    Sensors - LIDAR */
#define CAMERA_2_WIDTH                          ( 1U ) /* single point of data */
#define CAMERA_2_HEIGHT                         ( 1U ) /* single point of data */
#define CAMERA_2_DEPTH                          ( 12U ) /* 12 bit color ( 4k ) */
#define CAMERA_2_RATE                           ( 1000U )
/* 270 Hz typical, 650 Hz in fast mode ( reduced sensitivity ), >1000 Hz at short range */
#define HW_SENSOR_LIDAR_I2C_ADDR                ( 0x62 ) /* 400 kbit/s max */
#define HW_SENSOR_LIDAR_MODE_PORT               ( GPIO_PORTA_BASE )
#define HW_SENSOR_LIDAR_MODE_PIN                ( GPIO_PIN_4 )
#define HW_SENSOR_LIDAR_ENABLE_PORT             ( GPIO_PORTA_BASE )
#define HW_SENSOR_LIDAR_ENABLE_PIN              ( GPIO_PIN_3 )

#endif /* OGC_HW_THERMAL_INSPECTION_TOOL_H */
