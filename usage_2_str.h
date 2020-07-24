#pragma once

#include <stdint.h>

const wchar_t* UsagePageToStr(uint16_t PageID)
{
	if (0 == 0) return 0;
	else if (PageID == 0x00) return _T("Undefined");
	else if (PageID == 0x01) return _T("Generic Desktop Controls");
	else if (PageID == 0x02) return _T("Simulation Controls");
	else if (PageID == 0x03) return _T("VR Controls");
	else if (PageID == 0x04) return _T("Sport Controls");
	else if (PageID == 0x05) return _T("Game Controls");
	else if (PageID == 0x06) return _T("Generic Device Controls");
	else if (PageID == 0x07) return _T("Keyboard/Keypad");
	else if (PageID == 0x08) return _T("LEDs");
	else if (PageID == 0x09) return _T("Button");
	else if (PageID == 0x0A) return _T("Ordinal");
	else if (PageID == 0x0B) return _T("Telephony");
	else if (PageID == 0x0C) return _T("Consumer");
	else if (PageID == 0x0D) return _T("Digitizer");
	else if (PageID == 0x0E) return _T("Reserved");
	else if (PageID == 0x0F) return _T("PID Page");
	else if (PageID == 0x10) return _T("Unicode");
	else if (PageID >= 0x11 && PageID <= 0x13) return _T("Reserved");
	else if (PageID == 0x14) return _T("Alphanumeric Display");
	else if (PageID >= 0x15 && PageID <= 0x3f) return _T("Reserved");
	else if (PageID == 0x40) return _T("Medical Instruments");
	else if (PageID >= 0x41 && PageID <= 0x7F) return _T("Reserved");
	else if (PageID >= 0x80 && PageID <= 0x83) return _T("Monitor pages");
	else if (PageID >= 0x84 && PageID <= 0x87) return _T("Power pages");
	else if (PageID >= 0x88 && PageID <= 0x8B) return _T("Reserved");
	else if (PageID == 0x8C) return _T("Bar Code Scanner page");
	else if (PageID == 0x8E) return _T("Magnetic Stripe Reading (MSR)Devices");
	else if (PageID == 0x8F) return _T("Reserved Point of Sale pages");
	else if (PageID == 0x90) return _T("Camera Control Page");
	else if (PageID == 0x91) return _T("Arcade Page");
	else if (PageID >= 0x92 && PageID <= 0xFEFF) return _T("Reserved");
	else if (PageID >= 0xFF00 && PageID <= 0xFFFF) return _T("Vendor-defined");

	return 0;
}



const wchar_t* UsagePageToStr(uint16_t PageID, uint16_t UsageID)
{
	if (PageID = 0x01) {
		if (0 == 0) return 0;
		else if (UsageID == 0x00) return _T("Undefined");
		else if (UsageID == 0x01) return _T("Pointer");
		else if (UsageID == 0x02) return _T("Mouse");
		else if (UsageID == 0x03) return _T("Reserved");
		else if (UsageID == 0x04) return _T("Joystick");
		else if (UsageID == 0x05) return _T("Game Pad");
		else if (UsageID == 0x06) return _T("Keyboard");
		else if (UsageID == 0x07) return _T("Keypad");
		else if (UsageID == 0x08) return _T("Multi-axis Controller");
		else if (UsageID == 0x09) return _T("Tablet PC System Controls");
		else if (UsageID >= 0x0A && UsageID <= 0x2F) return _T("Reserved");
		else if (UsageID == 0x30) return _T("X");
		else if (UsageID == 0x31) return _T("Y");
		else if (UsageID == 0x32) return _T("Z");
		else if (UsageID == 0x33) return _T("Rx");
		else if (UsageID == 0x34) return _T("Ry");
		else if (UsageID == 0x35) return _T("Rz");
		else if (UsageID == 0x36) return _T("Slider");
		else if (UsageID == 0x37) return _T("Dial");
		else if (UsageID == 0x38) return _T("Wheel");
		else if (UsageID == 0x39) return _T("Hat switch");
		else if (UsageID == 0x3A) return _T("Counted Buffer");
		else if (UsageID == 0x3B) return _T("Byte Count");
		else if (UsageID == 0x3C) return _T("Motion Wakeup");
		else if (UsageID == 0x3D) return _T("Start");
		else if (UsageID == 0x3E) return _T("Select");
		else if (UsageID == 0x3F) return _T("Reserved");
		else if (UsageID == 0x40) return _T("Vx");
		else if (UsageID == 0x41) return _T("Vy");
		else if (UsageID == 0x42) return _T("Vz");
		else if (UsageID == 0x43) return _T("Vbrx");
		else if (UsageID == 0x44) return _T("Vbry");
		else if (UsageID == 0x45) return _T("Vbrz");
		else if (UsageID == 0x46) return _T("Vno");
		else if (UsageID == 0x47) return _T("Feature Notification");
		else if (UsageID == 0x48) return _T("Resolution Multiplier");
		else if (UsageID >= 0x49 && UsageID <= 0x7F) return _T("Reserved");
		else if (UsageID == 0x80) return _T("System Control");
		else if (UsageID == 0x81) return _T("System Power Down");
		else if (UsageID == 0x82) return _T("System Sleep");
		else if (UsageID == 0x83) return _T("System Wake Up");
		else if (UsageID == 0x84) return _T("System Context Menu");
		else if (UsageID == 0x85) return _T("System Main Menu");
		else if (UsageID == 0x86) return _T("System App Menu");
		else if (UsageID == 0x87) return _T("System Menu Help");
		else if (UsageID == 0x88) return _T("System Menu Exit");
		else if (UsageID == 0x89) return _T("System Menu Select");
		else if (UsageID == 0x8A) return _T("System Menu Right");
		else if (UsageID == 0x8B) return _T("System Menu Left");
		else if (UsageID == 0x8C) return _T("System Menu Up");
		else if (UsageID == 0x8D) return _T("System Menu Down");
		else if (UsageID == 0x8E) return _T("System Cold Restart");
		else if (UsageID == 0x8F) return _T("System Warm Restart");
		else if (UsageID == 0x90) return _T("D-pad Up");
		else if (UsageID == 0x91) return _T("D-pad Down");
		else if (UsageID == 0x92) return _T("D-pad Right");
		else if (UsageID == 0x93) return _T("D-pad Left O");
		else if (UsageID >= 0x94 && UsageID <= 0x9F) return _T("Reserved");
		else if (UsageID == 0xA0) return _T("System Dock");
		else if (UsageID == 0xA1) return _T("System Undock");
		else if (UsageID == 0xA2) return _T("System Setup");
		else if (UsageID == 0xA3) return _T("System Break");
		else if (UsageID == 0xA4) return _T("System Debugger Break");
		else if (UsageID == 0xA5) return _T("Application Break");
		else if (UsageID == 0xA6) return _T("Application Debugger Break");
		else if (UsageID == 0xA7) return _T("System Speaker Mute");
		else if (UsageID == 0xA8) return _T("System Hibernate");
		else if (UsageID >= 0xA9 && UsageID <= 0xAF) return _T("Reserved");
		else if (UsageID == 0xB0) return _T("System Display Invert");
		else if (UsageID == 0xB1) return _T("System Display Internal");
		else if (UsageID == 0xB2) return _T("System Display External");
		else if (UsageID == 0xB3) return _T("System Display Both");
		else if (UsageID == 0xB4) return _T("System Display Dual O");
		else if (UsageID == 0xB5) return _T("System Display Toggle Int/Ext");
		else if (UsageID == 0xB6) return _T("System Display SwapPrimary/Secondary");
		else if (UsageID == 0xB7) return _T("System Display LCD Autoscale");
		else if (UsageID >= 0xB8 && UsageID <= 0xFFFF) return _T("Reserved");
	}


	if (PageID = 0x02) {
		if (0 == 0) return 0;
		else if (UsageID == 0x00) return _T("Undefined");
		else if (UsageID == 0x01) return _T("Flight Simulation Device");
		else if (UsageID == 0x02) return _T("Automobile Simulation Device");
		else if (UsageID == 0x03) return _T("Tank Simulation Device");
		else if (UsageID == 0x04) return _T("Spaceship Simulation Device");
		else if (UsageID == 0x05) return _T("Submarine Simulation Device");
		else if (UsageID == 0x06) return _T("Sailing Simulation Device");
		else if (UsageID == 0x07) return _T("Motorcycle Simulation Device");
		else if (UsageID == 0x08) return _T("Sports Simulation Device");
		else if (UsageID == 0x09) return _T("Airplane Simulation Device");
		else if (UsageID == 0x0A) return _T("Helicopter Simulation Device");
		else if (UsageID == 0x0B) return _T("Magic Carpet Simulation Device");
		else if (UsageID == 0x0C) return _T("Bicycle Simulation Device");
		else if (UsageID >= 0x0D && UsageID <= 0x1F) return _T("Reserved");
		else if (UsageID == 0x20) return _T("Flight Control Stick");
		else if (UsageID == 0x21) return _T("Flight Stick");
		else if (UsageID == 0x22) return _T("Cyclic Control");
		else if (UsageID == 0x23) return _T("Cyclic Trim");
		else if (UsageID == 0x24) return _T("Flight Yoke");
		else if (UsageID == 0x25) return _T("Track Control");
		else if (UsageID >= 0x26 && UsageID <= 0xAF) return _T("Reserved");
		else if (UsageID == 0xB0) return _T("Aileron");
		else if (UsageID == 0xB1) return _T("Aileron Trim");
		else if (UsageID == 0xB2) return _T("Anti-Torque Control");
		else if (UsageID == 0xB3) return _T("Autopilot Enable");
		else if (UsageID == 0xB4) return _T("Chaff Release");
		else if (UsageID == 0xB5) return _T("Collective Control");
		else if (UsageID == 0xB6) return _T("Dive Brake");
		else if (UsageID == 0xB7) return _T("Electronic Countermeasures");
		else if (UsageID == 0xB8) return _T("Elevator");
		else if (UsageID == 0xB9) return _T("Elevator Trim");
		else if (UsageID == 0xBA) return _T("Rudder");
		else if (UsageID == 0xBB) return _T("Throttle");
		else if (UsageID == 0xBC) return _T("Flight Communications");
		else if (UsageID == 0xBD) return _T("Flare Release");
		else if (UsageID == 0xBE) return _T("Landing Gear");
		else if (UsageID == 0xBF) return _T("Toe Brake");
		else if (UsageID == 0xC0) return _T("Trigger");
		else if (UsageID == 0xC1) return _T("Weapons Arm");
		else if (UsageID == 0xC2) return _T("Weapons Select");
		else if (UsageID == 0xC3) return _T("Wing Flaps");
		else if (UsageID == 0xC4) return _T("Accelerator");
		else if (UsageID == 0xC5) return _T("Brake");
		else if (UsageID == 0xC6) return _T("Clutch");
		else if (UsageID == 0xC7) return _T("Shifter");
		else if (UsageID == 0xC8) return _T("Steering");
		else if (UsageID == 0xC9) return _T("Turret Direction");
		else if (UsageID == 0xCA) return _T("Barrel Elevation");
		else if (UsageID == 0xCB) return _T("Dive Plane");
		else if (UsageID == 0xCC) return _T("Ballast");
		else if (UsageID == 0xCD) return _T("Bicycle Crank");
		else if (UsageID == 0xCE) return _T("Handle Bars");
		else if (UsageID == 0xCF) return _T("Front Brake");
		else if (UsageID == 0xD0) return _T("Rear Brake");
		else if (UsageID >= 0xD1 && UsageID <= 0xFFFF) return _T("Reserved");
	}

	return 0;
}

