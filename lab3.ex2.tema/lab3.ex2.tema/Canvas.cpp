#include "Canvas.h"
#include <iostream>
#include <cmath>

Canvas::Canvas(int width, int height) {
    this->width = width;
    this->height = height;
    Clear();
}

void Canvas::DrawCircle(int x, int y, int ray, char ch) {
    for (int i=y-ray; i<=y+ray;i++) {
        int t = i - y;
        t = t * t;
        int z = ray * ray - t;
        z     = sqrt(z);
        int z1 = x + z;
        int z2 = x - z;
        mat[i][z1] = ch;
        mat[i][z2] = ch;
    }
    mat[ray + x][y] = ch;
    //mat[y][ray + x] = ch;
}

void Canvas::FillCircle(int x, int y, int ray, char ch) {
    for (int i = y - ray+1; i < y + ray; i++) {
        bool ok = 0;
        for (int j = x - ray; j <= x + ray; j++) {
            if (mat[i][j] == '.')
                ok = !ok;
            if (ok == 1)
                mat[i][j] = '.';
        }
    }
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch) {
    for (int i = left; i <= right; i++)
        SetPoint(i, top, ch);
    for (int i = top; i <= bottom; i++)
        SetPoint(right, i, ch);
    for (int i = left; i <= right; i++)
        SetPoint(i, bottom, ch);
    for (int i = top; i <= bottom; i++)
        SetPoint(left,i,ch);
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch) {
    for (int j = top + 1; j < bottom; j++)
        for (int i = left + 1; i < right; i++)
            SetPoint(i, j, ch);
}

void Canvas::SetPoint(int x, int y, char ch) {
    this->mat[x][y]=ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch) {
        int dx, dy, p, x, y;

        dx = x2 - x1;
        dy = y2 - y1;

        x = x1;
        y = y1;

        p = 2 * dy - dx;

        while (x <= x2) {
            if (p >= 0) {
                SetPoint(x, y, ch);
                y = y + 1;
                p = p + 2 * dy - 2 * dx;
            } else {
                SetPoint(x, y, ch);
                p = p + 2 * dy;
            }
            x = x + 1;
        }
}

void Canvas::Print() {
    for (int i=0;i<this->height;i++) {
        for (int j = 0; j < this->width; j++) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << '\n';
    }
}

void Canvas::Clear() {
    memset(mat, ' ', sizeof(mat));
}
