/*
 * TestTransmit.cpp
 *
 *  Created on: Feb 28, 2013
 *      Author: Danke
 */

#include <iostream>
#include <string>
#include <vector>
#include <dat/BitInQueue.h>
#include <dat/BitOutQueue.h>

using namespace std;

int main()
{
    BitInQueue inq("BitInQueue");
    BitOutQueue outq("BitOutQueue");

    cout << "InQueue" << endl;

    // push data
    for (int i = 0; i < 80; i++)
        for (int j = 0; j < 8; j++)
            inq.pushBit((i % 8) == j);

    while (!inq.empty()) {
        cout << "Pop data: " << (int) inq.front() << endl;
        inq.pop_front();
    }

    cout << "OutQueue" << endl;
    for (int i = 0; i < 3; i++)
        outq.push(i);

    while (outq.hasData())
        cout << "Pop bit: " << (int)outq.popBit() << endl;

    return 0;
}
