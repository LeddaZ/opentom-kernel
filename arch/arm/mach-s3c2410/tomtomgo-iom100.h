#define SUPPORT_M100
inline void IO_InitM100(void)
{
	VALUE_SET(id                 , GOTYPE_M100);
	VALUE_SET(caseid             , GOCASE_MALAGA);
	VALUE_SET(cputype            , GOCPU_S3C2410);
	VALUE_SET(btchip             , GOBT_BC3);
	VALUE_SET(btspeed            , 460800);
	VALUE_SET(btclock            , 16000000);
	VALUE_SET(btclass            , 0x001f00);
	VALUE_SET(lowbutton          , 1);
	VALUE_SET(batterytype	     , GOBATTERY_ICR18650_2200);
	VALUE_SET(chargertype        , GOCHARGER_LTC1733);
	VALUE_SET(chargerresistor    , 1300);
	VALUE_SET(sdcard             , 1);
	VALUE_SET(sdslot             , 1);
	VALUE_SET(gpio_autoshutdown  , 0);
	VALUE_SET(tfttype            , GOTFT_NEC_NL2432HC22);
	VALUE_SET(backlighttype	     , GOBACKLIGHT_CH0_TPS61042_350);
	VALUE_SET(tsxchannel         , 7);
	VALUE_SET(tsychannel         , 5);
	VALUE_SET(gpstype            , GOGPS_SIRF2);
	VALUE_SET(codectype          , GOCODEC_WM8711);
	VALUE_SET(usbslavetype       , GOUSB_S3C24XX);
	VALUE_SET(pnp                , 1);
	VALUE_SET(usbdevicehostcapable,1);
	VALUE_SET(ohciports          , 0x01);

	STRING_SET(name,"TomTom GO 300");
	STRING_SET(btname,"TomTom GO 300");
	STRING_SET(usbname,"GO 300");
	STRING_SET(familyname,"TomTom GO");
	STRING_SET(projectname,"MALAGA");
	STRING_SET(requiredbootloader,"2.02");
	STRING_SET(dockdev,"ttySAC0");
	STRING_SET(btdev,"ttySAC1");
	STRING_SET(gpsdev,"ttySAC2");

	PIN_SET(SD_PWR_ON       , PIN_GPA17 | PIN_INVERTED);
	PIN_SET(WP_SD           , PIN_GPH8);
	PIN_SET(CD_SD           , PIN_GPF2 | PIN_INVERTED);
	PIN_SET(GPS_RESET       , PIN_GPH9 | PIN_INVERTED);
	PIN_SET(GPS_ON          , PIN_GPH10);
	PIN_SET(GPS_1PPS        , PIN_GPG0);
	PIN_SET(GPS_REPRO       , PIN_GPG1);
	PIN_SET(CHARGEFAULT     , PIN_GPE3 | PIN_INVERTED);
	PIN_SET(CHARGE_OUT      , PIN_GPG2 | PIN_OPEN_EMITTER);
	PIN_SET(CHARGING        , PIN_GPG3 | PIN_INVERTED);
	PIN_SET(AIN4_PWR        , PIN_GPA18);
	PIN_SET(LIGHTS_DETECT   , PIN_GPF3 | PIN_INVERTED);
	PIN_SET(DOCK_PWREN      , PIN_GPD8 | PIN_INVERTED);
	PIN_SET(DOCK_SENSE      , PIN_GPG6 | PIN_INVERTED);
	PIN_SET(ACC_PWR_ON      , PIN_GPE11 | PIN_INVERTED);
	PIN_SET(AMP_ON          , PIN_GPF5);
	PIN_SET(DAC_PWR_ON      , PIN_GPA22);
	PIN_SET(MUTE_EXT        , PIN_GPA19);
	PIN_SET(MUTE_INT        , PIN_GPF6);
	PIN_SET(I2SSDO          , PIN_GPE4);
	PIN_SET(CDCLK           , PIN_GPE2);
	PIN_SET(I2SSCLK         , PIN_GPE1);
	PIN_SET(I2SLRCK         , PIN_GPE0);
	PIN_SET(L3CLOCK         , PIN_GPB4);
	PIN_SET(L3MODE          , PIN_GPB3);
	PIN_SET(L3DATA          , PIN_GPB2);
	PIN_SET(CTS_DOCK        , PIN_GPH0);
	PIN_SET(RTS_DOCK        , PIN_GPH1);
	PIN_SET(TXD_DOCK        , PIN_GPH2);
	PIN_SET(RXD_DOCK        , PIN_GPH3);
	PIN_SET(TXD_GPS         , PIN_GPH6);
	PIN_SET(RXD_GPS         , PIN_GPH7);
	PIN_SET(TXD_BT          , PIN_GPH4);
	PIN_SET(RXD_BT          , PIN_GPH5);
	PIN_SET(RTS_BT          , PIN_GPC8);
	PIN_SET(CTS_BT          , PIN_GPC9);
	PIN_SET(LCD_VCC_PWREN   , PIN_GPG4 | PIN_INVERTED);
	PIN_SET(LCD_BIAS_PWREN  , PIN_GPC7);
	PIN_SET(LCD_OEN         , PIN_GPC6);
	PIN_SET(BACKLIGHT_EN    , PIN_GPB1 | PIN_INVERTED);
	PIN_SET(BACKLIGHT_PWM   , PIN_GPB0);
	PIN_SET(USB_HOST_DETECT , PIN_GPF1 | PIN_INVERTED);
	PIN_SET(USB_PULL_EN     , PIN_GPE13 | PIN_INVERTED);
	PIN_SET(ON_OFF          , PIN_GPF0 | PIN_INVERTED);
	PIN_SET(IGNITION        , PIN_GPF7 | PIN_INVERTED);
	PIN_SET(ACPWR           , PIN_GPG7 | PIN_INVERTED);
	PIN_SET(XMON            , PIN_GPG15 | PIN_OPEN_COLLECTOR);
	PIN_SET(XPON            , PIN_GPG14 | PIN_OPEN_EMITTER);
	PIN_SET(YMON            , PIN_GPG13 | PIN_OPEN_COLLECTOR);
	PIN_SET(YPON            , PIN_GPG12 | PIN_OPEN_EMITTER);
	PIN_SET(TSDOWN          , PIN_GPG15 | PIN_OPEN_COLLECTOR);
	PIN_SET(FACTORY_TEST_POINT , PIN_GPC0);
}
