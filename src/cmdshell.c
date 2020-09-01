/* --------------------------------------------------------------------------
 *
 *                       Simple Shell for Embedded Systems
 *                       ---------------------------------
 *
 *                       Suitable for tiny embedded systems
 *
 *                      Copyright (c) 2020 Leandro Francucci
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * Site: https://vortexmakes.com/
 * e-mail: lf@vortexmakes.com
 *  ---------------------------------------------------------------------------
 */

/**
 *  \file       file_header.c
 *  \brief      Brief description and purpose of this file.
 *
 *  Long description and purpose of this file.
 */

/* -------------------------- Development history -------------------------- */
/*
 *  2016.12.15  LeFr  v2.4.05  ---
 */

/* -------------------------------- Authors -------------------------------- */
/*
 *  LeFr  Leandro Francucci  lf@vortexmakes.com
 */

/* --------------------------------- Notes --------------------------------- */
/* ----------------------------- Include files ----------------------------- */
/* ----------------------------- Local macros ------------------------------ */
/* ------------------------------- Constants ------------------------------- */
/* ---------------------------- Local data types --------------------------- */
/* ---------------------------- Global variables --------------------------- */
/* ---------------------------- Local variables ---------------------------- */
/* ----------------------- Local function prototypes ----------------------- */
/* ---------------------------- Local functions ---------------------------- */
/* ---------------------------- Global functions --------------------------- */
#include "mytypes.h"
#include "command.h"
#include "conser.h"
#include "formats.h"

MInt
do_shell(const CMD_TABLE *p, MInt argc, char *argv[])
{
    myprintf(0, "\n\tCommand shell setup: \n\n");
    myprintf(0, "\t%sdefined longhelp\n", LONGHELP ? "" : "un");
    myprintf(0, "\tdefined maximum arguments = %01d\n\n", MAXARGS);

    return 0;
}
/* ------------------------------ End of file ------------------------------ */
