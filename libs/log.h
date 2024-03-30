#ifndef FVWMLIB_LOG_H
#define FVWMLIB_LOG_H

#define printflike(a, b) __attribute__ ((format (printf, a, b)))

extern int	lib_log_level;

void	set_log_file(char *name);
void	log_open(const char *);
void	log_toggle(const char *);
void	log_close(void);
void printflike(2, 3) fvwm_debug(const char *, const char *, ...);
void printflike(4, 5) fvwm_module_debug(
	int *, const char *, const char *, const char *, ...);

#endif
