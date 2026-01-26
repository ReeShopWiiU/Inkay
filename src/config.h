//
// Created by ash on 10/12/22.
//

#ifndef INKAY_CONFIG_H
#define INKAY_CONFIG_H

class Config {
public:

    static bool connect_to_network;

    /* 
     * this allows us to either let pretendo urls, 
     * or just let our urls take over, 
     * its easier since well id rather let pretendo work as normal
     */
    static bool connect_to_reeshop;

    static bool initialized;

    static bool shown_warning;

    static bool plugin_is_loaded;

    static bool block_initialize;
};

#endif //INKAY_CONFIG_H
