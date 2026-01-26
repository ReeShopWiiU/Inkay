//
// Created by ash on 10/12/22.
//

#ifndef INKAY_CONFIG_H
#define INKAY_CONFIG_H

class Config {
public:
    static void Init();

    // wups config items
    static bool connect_to_network;

    /* 
     * this allows us to either let pretendo urls, 
     * or just let our urls take over, 
     * its easier since well id rather let pretendo work as normal
     */
    static bool connect_to_reeshop;

    // private stuff
    static bool need_relaunch;

    // private stuff
    static bool is_wiiu_menu;

    static bool unregister_task_item_pressed;
};

#endif //INKAY_CONFIG_H
