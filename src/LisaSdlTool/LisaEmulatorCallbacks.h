//
//  LisaEmulatorCallbacks.h
//  LisaEmXcode
//
//  Created by idz on 1/26/23.
//

#ifndef LisaEmulatorCallbacks_h
#define LisaEmulatorCallbacks_h

#include <vars.h>

#ifdef __cplusplus
extern "C" {
#endif

void sound_play(uint16 t2);
void messagebox(const char *s, const char *t);
int yesnomessagebox(const char *s, const char *t);
void ImageWriterLoop(int iw, uint8 c);
void LisaScreenRefresh(void);
void connect_serial_devices(void);
void contrastchange(void);
void lisa_powered_off();
void lisa_console_output(uint8 c);
void eject_floppy_animation(void);
void floppy_motor_sounds(int track);
void init_terminal_serial_port(int port);
void lisa_rebooted();
void lpw_console_output(char *text);
void lpw_console_output_c(char c);
void on_lisa_exit(void);
void sound_off(void);
void save_pram(void);
void update_profile_preferences_path(char *newfilename);
int pickprofilesize(char *filename, int allowexisting);
char read_serial_port_terminal(int port);
void write_serial_port_terminal(int port, uint8 data);
void rename_rompath(char *rompath);

#ifdef __cplusplus
}
#endif

#endif /* LisaEmulatorCallbacks_h */
