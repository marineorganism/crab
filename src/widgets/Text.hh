#ifndef TEXT_H
#define TEXT_H

#include "../Widget.hh"
#include <string>
#include "../Graphics.hh"

class Text: public Widget {
    char *content;
    int colour;

public:
    /**
     * creates the text with actual text it shows.
     * @param content is the text it will display.
     */
    Text(char *content, int colour = Graphics::CYAN) {
        this->content = content;
        this->colour = colour;
    }

    /**
     * displays the text.
     * @param graphics manages the picutrue.
     * @param x is the horizontal location of the text.
     * @param y is the vertical location to put the top of the text.
     * @param w is the horizontal bounding of the text.
     * @param h is the vertical bounding of the text.
     */
    void render(Graphics *graphics, int x, int y, int w, int h) {
        graphics->blitString(this->content, x, y, this->colour);
    }
};

#endif