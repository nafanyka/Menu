//
// Created by nafanya on 24.08.2017.
//

#ifndef AQUA_MENU_H
#define AQUA_MENU_H

#include <Arduino.h>


#define NFM_ITEMT_DASHBOARD            1
#define NFM_ITEMT_ITEM                 2
#define NFM_ITEMT_DATE                 3
#define NFM_ITEMT_TIME                 4
#define NFM_ITEMT_F                    5
#define NFM_ITEMT_U8                   6
#define NFM_ITEMT_U16                  7
#define NFM_ITEMT_U32                  8
#define NFM_ITEMT_SELECT               9
#define NFM_ITEMT_MSELECT              10
#define NFM_ITEMT_BOOL                 11
#define NFM_ITEMT_RGB                  12


typedef struct {
    uint8_t         type;

} nfm_item;


class NfMenu {
public:
    void init();

};


#endif //AQUA_MENU_H
