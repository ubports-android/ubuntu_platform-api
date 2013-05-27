/*
 * Copyright © 2013 Canonical Ltd.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authored by: Ricardo Mendoza <ricardo.mendoza@canonical.com>
 *              Thomas Voß <thomas.voss@canonical.com>           
 */

#ifndef UBUNTU_APPLICATION_UI_DISPLAY_H_
#define UBUNTU_APPLICATION_UI_DISPLAY_H_

#ifdef __cplusplus
extern "C" {
#endif

    typedef void UAUiDisplay;
    
    UAUiDisplay*
    ua_ui_display_new_with_index(
        size_t index);
    
    void
    ua_ui_display_destroy(
        UAUiDisplay* display);
    
    uint32_t
    ua_ui_display_query_horizontal_res(
        UAUiDisplay* display);
    
    uint32_t
    ua_ui_display_query_vertical_res(
        UAUiDisplay* display);
    
#ifdef __cplusplus
}
#endif

#endif /* UBUNTU_APPLICATION_UI_DISPLAY_H_ */
