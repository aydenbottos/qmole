#ifndef _WINKEYNAMES_H
#define _WINKEYNAMES_H
/*
 * Copyright 1990,91 by Thomas Roell, Dinkelscherben, Germany.
 *
 * Permission to use, copy, modify, distribute, and sell this software and its
 * documentation for any purpose is hereby granted without fee, provided that
 * the above copyright notice appear in all copies and that both that
 * copyright notice and this permission notice appear in supporting
 * documentation, and that the name of Thomas Roell not be used in
 * advertising or publicity pertaining to distribution of the software without
 * specific, written prior permission.  Thomas Roell makes no representations
 * about the suitability of this software for any purpose.  It is provided
 * "as is" without express or implied warranty.
 *
 * THOMAS ROELL DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
 * INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO
 * EVENT SHALL THOMAS ROELL BE LIABLE FOR ANY SPECIAL, INDIRECT OR
 * CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
 * DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 *
 */

#define XK_TECHNICAL
#define	XK_KATAKANA
#include <X11/keysym.h>

#define GLYPHS_PER_KEY	4
#define NUM_KEYCODES	248
#define MIN_KEYCODE     8
#define MAX_KEYCODE     (NUM_KEYCODES + MIN_KEYCODE - 1)

#define AltMask		Mod1Mask
#define NumLockMask	Mod2Mask
#define AltLangMask	Mod3Mask
#define KanaMask	Mod4Mask
#define ScrollLockMask	Mod5Mask

#define KeyPressed(k) (keyc->down[k >> 3] & (1 << (k & 7)))
#define ModifierDown(k) ((keyc->state & (k)) == (k))

/*
 * NOTE: The AT/MF keyboards can generate (via the 8042) two (MF: three)
 *       sets of scancodes. Set3 can only be generated by a MF keyboard.
 *       Set2 sends a makecode for keypress, and the same code prefixed by a
 *       F0 for keyrelease. This is a little bit ugly to handle. Thus we use
 *       here for X386 the PC/XT compatible Set1. This set uses 8bit scancodes.
 *       Bit 7 ist set if the key is released. The code E0 switches to a
 *       different meaning to add the new MF cursorkeys, while not breaking old
 *       applications. E1 is another special prefix. Since I assume that there
 *       will be further versions of PC/XT scancode compatible keyboards, we
 *       may be in trouble one day.
 *
 * IDEA: 1) Use Set2 on AT84 keyboards and translate it to MF Set3.
 *       2) Use the keyboards native set and translate it to common keysyms.
 */

/*
 * definition of the AT84/MF101/MF102 Keyboard:
 * ============================================================
 *       Defined             Key Cap Glyphs       Pressed value
 *      Key Name            Main       Also       (hex)    (dec)
 *      ----------------   ---------- -------    ------    ------
 */

#define KEY_Escape       /* Escape                0x01  */    1  
#define KEY_1            /* 1           !         0x02  */    2 
#define KEY_2            /* 2           @         0x03  */    3 
#define KEY_3            /* 3           #         0x04  */    4 
#define KEY_4            /* 4           $         0x05  */    5 
#define KEY_5            /* 5           %         0x06  */    6 
#define KEY_6            /* 6           ^         0x07  */    7 
#define KEY_7            /* 7           &         0x08  */    8 
#define KEY_8            /* 8           *         0x09  */    9 
#define KEY_9            /* 9           (         0x0a  */   10 
#define KEY_0            /* 0           )         0x0b  */   11 
#define KEY_Minus        /* - (Minus)   _ (Under) 0x0c  */   12
#define KEY_Equal        /* = (Equal)   +         0x0d  */   13 
#define KEY_BackSpace    /* Back Space            0x0e  */   14 
#define KEY_Tab          /* Tab                   0x0f  */   15
#define KEY_Q            /* Q                     0x10  */   16
#define KEY_W            /* W                     0x11  */   17
#define KEY_E            /* E                     0x12  */   18
#define KEY_R            /* R                     0x13  */   19
#define KEY_T            /* T                     0x14  */   20
#define KEY_Y            /* Y                     0x15  */   21
#define KEY_U            /* U                     0x16  */   22
#define KEY_I            /* I                     0x17  */   23
#define KEY_O            /* O                     0x18  */   24
#define KEY_P            /* P                     0x19  */   25
#define KEY_LBrace       /* [           {         0x1a  */   26
#define KEY_RBrace       /* ]           }         0x1b  */   27 
#define KEY_Enter        /* Enter                 0x1c  */   28
#define KEY_LCtrl        /* Ctrl(left)            0x1d  */   29
#define KEY_A            /* A                     0x1e  */   30
#define KEY_S            /* S                     0x1f  */   31
#define KEY_D            /* D                     0x20  */   32 
#define KEY_F            /* F                     0x21  */   33
#define KEY_G            /* G                     0x22  */   34
#define KEY_H            /* H                     0x23  */   35
#define KEY_J            /* J                     0x24  */   36
#define KEY_K            /* K                     0x25  */   37
#define KEY_L            /* L                     0x26  */   38
#define KEY_SemiColon    /* ;(SemiColon) :(Colon) 0x27  */   39
#define KEY_Quote        /* ' (Apostr)  " (Quote) 0x28  */   40
#define KEY_Tilde        /* ` (Accent)  ~ (Tilde) 0x29  */   41
#define KEY_ShiftL       /* Shift(left)           0x2a  */   42
#define KEY_BSlash       /* \(BckSlash) |(VertBar)0x2b  */   43
#define KEY_Z            /* Z                     0x2c  */   44
#define KEY_X            /* X                     0x2d  */   45
#define KEY_C            /* C                     0x2e  */   46
#define KEY_V            /* V                     0x2f  */   47
#define KEY_B            /* B                     0x30  */   48
#define KEY_N            /* N                     0x31  */   49
#define KEY_M            /* M                     0x32  */   50
#define KEY_Comma        /* , (Comma)   < (Less)  0x33  */   51
#define KEY_Period       /* . (Period)  >(Greater)0x34  */   52
#define KEY_Slash        /* / (Slash)   ?         0x35  */   53
#define KEY_ShiftR       /* Shift(right)          0x36  */   54
#define KEY_KP_Multiply  /* *                     0x37  */   55
#define KEY_Alt          /* Alt(left)             0x38  */   56
#define KEY_Space        /*   (SpaceBar)          0x39  */   57
#define KEY_CapsLock     /* CapsLock              0x3a  */   58
#define KEY_F1           /* F1                    0x3b  */   59
#define KEY_F2           /* F2                    0x3c  */   60
#define KEY_F3           /* F3                    0x3d  */   61
#define KEY_F4           /* F4                    0x3e  */   62
#define KEY_F5           /* F5                    0x3f  */   63
#define KEY_F6           /* F6                    0x40  */   64
#define KEY_F7           /* F7                    0x41  */   65
#define KEY_F8           /* F8                    0x42  */   66
#define KEY_F9           /* F9                    0x43  */   67
#define KEY_F10          /* F10                   0x44  */   68
#define KEY_NumLock      /* NumLock               0x45  */   69
#define KEY_ScrollLock   /* ScrollLock            0x46  */   70
#define KEY_KP_7         /* 7           Home      0x47  */   71 
#define KEY_KP_8         /* 8           Up        0x48  */   72 
#define KEY_KP_9         /* 9           PgUp      0x49  */   73 
#define KEY_KP_Minus     /* - (Minus)             0x4a  */   74
#define KEY_KP_4         /* 4           Left      0x4b  */   75
#define KEY_KP_5         /* 5                     0x4c  */   76
#define KEY_KP_6         /* 6           Right     0x4d  */   77
#define KEY_KP_Plus      /* + (Plus)              0x4e  */   78
#define KEY_KP_1         /* 1           End       0x4f  */   79
#define KEY_KP_2         /* 2           Down      0x50  */   80
#define KEY_KP_3         /* 3           PgDown    0x51  */   81
#define KEY_KP_0         /* 0           Insert    0x52  */   82
#define KEY_KP_Decimal   /* . (Decimal) Delete    0x53  */   83 
#define KEY_SysReqest    /* SysReqest             0x54  */   84
                         /* NOTUSED               0x55  */
#define KEY_Less         /* < (Less)   >(Greater) 0x56  */   86
#define KEY_F11          /* F11                   0x57  */   87
#define KEY_F12          /* F12                   0x58  */   88

#define KEY_Prefix0      /* special               0x60  */   96
#define KEY_Prefix1      /* specail               0x61  */   97

/*
 * The 'scancodes' below are generated by the server, because the MF101/102
 * keyboard sends them as sequence of other scancodes
 */
#define KEY_Home         /* Home                  0x59  */   89
#define KEY_Up           /* Up                    0x5a  */   90
#define KEY_PgUp         /* PgUp                  0x5b  */   91
#define KEY_Left         /* Left                  0x5c  */   92
#define KEY_Begin        /* Begin                 0x5d  */   93
#define KEY_Right        /* Right                 0x5e  */   94
#define KEY_End          /* End                   0x5f  */   95
#define KEY_Down         /* Down                  0x60  */   96
#define KEY_PgDown       /* PgDown                0x61  */   97
#define KEY_Insert       /* Insert                0x62  */   98
#define KEY_Delete       /* Delete                0x63  */   99
#define KEY_KP_Enter     /* Enter                 0x64  */  100
#define KEY_RCtrl        /* Ctrl(right)           0x65  */  101
#define KEY_Pause        /* Pause                 0x66  */  102
#define KEY_Print        /* Print                 0x67  */  103
#define KEY_KP_Divide    /* Divide                0x68  */  104
#define KEY_AltLang      /* AtlLang(right)        0x69  */  105
#define KEY_Break        /* Break                 0x6a  */  106
#define KEY_LMeta        /* Left Meta             0x6b  */  107
#define KEY_RMeta        /* Right Meta            0x6c  */  108
#define KEY_Menu         /* Menu                  0x6d  */  109
#define KEY_F13          /* F13                   0x6e  */  110
#define KEY_F14          /* F14                   0x6f  */  111
#define KEY_F15          /* F15                   0x70  */  112
#define KEY_F16          /* F16                   0x71  */  113
#define KEY_F17          /* F17                   0x72  */  114
#define KEY_KP_DEC       /* KP_DEC                0x73  */  115
#define KEY_KP_Equal	 /* Equal (Keypad)        0x76  */  118
#define KEY_XFER         /* Kanji Transfer        0x79  */  121
#define KEY_NFER         /* No Kanji Transfer     0x7b  */  123
#define KEY_Yen          /* Yen                   0x7d  */  125
#define KEY_HKTG         /* Hirugana/Katakana tog 0xc8  */  200
#define KEY_BSlash2      /* \           _         0xcb  */  203

/* These are for "notused" and "unknown" entries in translation maps. */
#define KEY_NOTUSED	  0
#define KEY_UNKNOWN	255

#endif /* _WINKEYNAMES_H */
