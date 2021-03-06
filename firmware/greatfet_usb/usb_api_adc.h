/*
 * This file is part of GreatFET
 */

#ifndef __USB_API_ADC_H__
#define __USB_API_ADC_H__

#include <usb_type.h>
#include <usb_request.h>

extern volatile bool adc_mode_enabled;

usb_request_status_t usb_vendor_request_adc_init(
	usb_endpoint_t* const endpoint, const usb_transfer_stage_t stage);
usb_request_status_t usb_vendor_request_read_adc(
	usb_endpoint_t* const endpoint, const usb_transfer_stage_t stage);

void adc_mode(void);

#endif /* __USB_API_ADC_H__ */
