#ifndef OGC_HW_THERMAL_INSPECTION_TOOL_H
#define OGC_HW_THERMAL_INSPECTION_TOOL_H

/* Development project built on the TI EK-TM4C123GXL Launchpad platform */

/* =====================================================================================================================
 *                                                                                                             Processor
 * =====================================================================================================================
 */
/*                                                                              Processor - TI Tiva C Series TM4C123G */
#define HW_SYS_CPU_TM4C123G         ( 1U ) /* safety check must match firmware csp selection */

/* =====================================================================================================================
 *                                                                                                                Clocks
 * =====================================================================================================================
 */
/*                                                                                            Clock - External 32 kHz */
#define HW_SYS_CLOCK_XT1            ( 1U ) /* trigger to configure external clock */
#define HW_SYS_CLOCK_XT1_SPEED      ( 32768U ) /* RTC clock for time measurement */

/*                                                                                            Clock - External 16 MHz */
#define HW_SYS_CLOCK_XT2            ( 1U ) /* trigger to configure external clock */
#define HW_SYS_CLOCK_XT2_SPEED      ( 16000000U ) /* 16 MHz system clock */

/* =====================================================================================================================
 *                                                                                                        User Interface
 * =====================================================================================================================
 */
/*                                                                                           User Interface - RGB LED */
#define HW_UI_INDICATOR_STAUS_MULTI ( 1U )
#define HW_RGB_RED_PORT             ( GPIO_PORTF_BASE )
#define HW_RGB_RED_PIN              ( GPIO_PIN_1 )
#define HW_RGB_BLUE_PORT            ( GPIO_PORTF_BASE )
#define HW_RGB_BLUE_PIN             ( GPIO_PIN_2 )
#define HW_RGB_GREEN_PORT           ( GPIO_PORTF_BASE )
#define HW_RGB_GREEN_PIN            ( GPIO_PIN_3 )

/*                                                                                       User Interface - Left Button */
#define HW_UI_BUTTON_L_PORT         ( GPIO_PORTF_BASE )
#define HW_UI_BUTTON_L_PIN          ( GPIO_PIN_3 )

/*                                                                                      User Interface - Right Button */
#define HW_UI_BUTTON_R_PORT         ( GPIO_PORTF_BASE )
#define HW_UI_BUTTON_R_PIN          ( GPIO_PIN_3 )

/*                                                                                      User Interface - Serial Comms */
#define HW_SERIAL_RX_PORT           ( GPIO_PORTF_BASE )
#define HW_SERIAL_RX_PIN            ( GPIO_PIN_3 )
#define HW_SERIAL_TX_PORT           ( GPIO_PORTF_BASE )
#define HW_SERIAL_TX_PIN            ( GPIO_PIN_3 )

/*                                                                                      User Interface - OLED Display */
#define HW_OLED_SELECT_PORT         ( GPIO_PORTF_BASE )
#define HW_OLED_SELECT_PIN          ( GPIO_PIN_3 )
#define HW_OLED_DATACOMMAND_PORT    ( GPIO_PORTF_BASE )
#define HW_OLED_DATACOMMAND_PIN     ( GPIO_PIN_3 )
#define HW_OLED_RST_PORT            ( GPIO_PORTF_BASE )
#define HW_OLED_RST_PIN             ( GPIO_PIN_3 )

/* =====================================================================================================================
 *                                                                                                               Sensors
 * =====================================================================================================================
 */
/*                                                                                               Sensors - RGB Camera */
#define HW_RGB_CAM_I2C_ADDR         ( 0x00 )
#define HW_RGB_CAM_DATA_PORT        ( GPIO_PORTB_BASE )
#define HW_RGB_CAM_VSYNC_PORT       ( GPIO_PORTC_BASE )
#define HW_RGB_CAM_VSYNC_PIN        ( GPIO_PIN_4 )
#define HW_RGB_CAM_HREF_PORT        ( GPIO_PORTC_BASE )
#define HW_RGB_CAM_HREF_PIN         ( GPIO_PIN_5 )
#define HW_RGB_CAM_PCLK_PORT        ( GPIO_PORTC_BASE )
#define HW_RGB_CAM_PCLK_PIN         ( GPIO_PIN_6 )
#define HW_RGB_CAM_XCLK_PORT        ( GPIO_PORTC_BASE )
#define HW_RGB_CAM_XCLK_PIN         ( GPIO_PIN_7 )
#define HW_RGB_CAM_PWDN_PORT        ( GPIO_PORTD_BASE )
#define HW_RGB_CAM_PWDN_PIN         ( GPIO_PIN_6 )
#define HW_RGB_CAM_RST_PORT         ( GPIO_PORTE_BASE )
#define HW_RGB_CAM_RST_PIN          ( GPIO_PIN_0 )

/*                                                                                                Sensors - IR Camera */
#define HW_IR_CAM_I2C_ADDR          ( 0x33 )

/*                                                                                         Sensors - PIR Motion Sense */
#define HW_PIR_MOTION_PORT          ( GPIO_PORTD_BASE )
#define HW_PIR_MOTION_PIN           ( GPIO_PIN_7 )

/*                                                                                                    Sensors - LIDAR */
#define HW_LIDAR_I2C_ADDR           ( 0x00 )
#define HW_LIDAR_MODE_PORT          ( GPIO_PORTA_BASE )
#define HW_LIDAR_MODE_PIN           ( GPIO_PIN_4 )
#define HW_LIDAR_ENABLE_PORT        ( GPIO_PORTA_BASE )
#define HW_LIDAR_ENABLE_PIN         ( GPIO_PIN_3 )


#endif /* OGC_HW_THERMAL_INSPECTION_TOOL_H */
