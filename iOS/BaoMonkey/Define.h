//
//  Define.h
//  BaoMonkey
//
//  Created by Jeremy Peltier on 07/05/2014.
//  Copyright (c) 2014 BaoMonkey. All rights reserved.
//

#ifndef __DEFINE_H__
# define __DEFINE_H__

/*
** GENERAL
*/

# define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
# define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height

/*
** LOAD DATA
*/

# define DATA_SPLASH_SOUND                  @"splash_prune"
# define DATA_SPLASH_TEXTURE                @"splash_texture"
# define DATA_COCONUT_TEXTURE               @"coconut_texture"
# define DATA_BANANA_TEXTURE                @"banana_texture"
# define DATA_PRUNE_TEXTURE                 @"prune_texture"
# define DATA_COCONUT_SOUND                 @"coconut_sound"

# define DATA_MONKEY_TEXTURE                @"monkey_texture"
# define DATA_MONKEY_WALK_ATLAS             @"monkey_walk_atlas_texture"

/*
** USER INFORMATIONS
*/

# define ENEMY_KEY                          @"enemy_key"
# define PRUNE_KEY                          @"prune_key"
# define SCORE_KEY                          @"score_key"

/*
** ACCELEROMETER
*/

# define kAccelerometerSpeed 25

/*
** NOTIFICATIONS
*/

# define NOTIFICATION_DROP_MONKEY_ITEM      @"NOTIFICATION_DROP_MONKEY_ITEM"
# define NOTIFICATION_DROP_WEAPON           @"NOTIFICATION_DROP_WEAPON"
# define NOTIFICATION_PAUSE_GAME            @"NOTIFICATION_PAUSE_GAME"
# define NOTIFICATION_RETRY_GAME            @"NOTIFICATION_RETRY_GAME"

/*
** SKACTION KEY
*/

# define SKACTION_MONKEY_WALKING            @"SKACTION_MONKEY_WALKING"
# define SKACTION_PRUNE_SPLASH              @"SKACTION_PRUNE_SPLASH"

/*
** NODE NAME
*/

# define ENEMY_NODE_NAME                    @"ENEMY_NODE_NAME"
# define WEAPON_NODE_NAME                   @"WEAPON_NODE_NAME"
# define ITEM_NODE_NAME                     @"ITEM_NODE_NAME"
# define PAUSE_BUTTON_NODE_NAME             @"PAUSE_NODE_NAME"
# define TRUNK_NODE_NAME                    @"TRUNK_NODE_NAME"
# define BACK_LEAF_NODE_NAME                @"BACK_LEAF_NODE_NAME"
# define FRONT_LEAF_NODE_NAME               @"FRONT_LEAF_NODE_NAME"
# define BACKGROUND_PROGRESS_BAR_NODE_NAME  @"trunkProgressLife background"
# define FRONT_PROGRESS_BAR_NODE_NAME       @"trunkProgressLife front"
# define SCORE_NODE_NAME                    @"SCORE_NODE_NAME"
# define SHOOT_NODE_NAME                    @"SHOOT_NODE_NAME"
# define CLOUD_NODE_NAME                    @"CLOUD_NODE_NAME"
# define RETRY_NODE_NAME                    @"RETRY_NODE_NAME"

/*
** POS FLOOR
*/

#define MIN_POSY_FLOOR  90.0
#define SPACE_BETWEEN   60.0
#define FLOOR_WIDTH     105.0
#define FLOOR_HEIGHT    15.0

#endif
