/* Special cases when no pullup allowed */

inline void IO_InitNoPullUp(void)
{
	PIN_ADD_MASK(GPS_1PPS,PIN_NO_PULLUP);
	PIN_ADD_MASK(HDD_RST,PIN_NO_PULLUP);
	PIN_ADD_MASK(HDD_IRQ,PIN_NO_PULLUP);
	PIN_ADD_MASK(USB_SUSPEND,PIN_NO_PULLUP);
	PIN_ADD_MASK(USB_EJECT,PIN_NO_PULLUP);
	if (IO_HaveCagliariDock()) {
		PIN_ADD_MASK(HEADPHONE_DETECT,PIN_NO_PULLUP);
	}
}
