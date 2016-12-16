/* Read words from input and store it in 
    buffer. Make buffer empty if no word 
    can be read because end of line.
    Truncates the word in buffer if its 
    length excedds len.                 */

#ifndef WORD_H
#define WORD_H

void read_line(char *word, int len);

#endif