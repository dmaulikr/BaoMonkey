//
//  Tank.m
//  BaoMonkey
//
//  Created by iPPLE on 21/05/2014.
//  Copyright (c) 2014 BaoMonkey. All rights reserved.
//

#import "Tank.h"

@interface Tank ()
@end

@implementation Tank {
    SEL selectorStrat[3];
}

- (void) initSpriteTank {
    _tankSprite = [SKSpriteNode spriteNodeWithColor:[SKColor blackColor]
                                               size:CGSizeMake(80, 40)];
}

- (instancetype) init {
    self = [super init];
    
    if (self != nil) {
        [self initSpriteTank];
    }
    
    return (self);
}

- (void) move {
    if (_sens == RIGHT) {
        if (_tankSprite.position.x + 1 + (_tankSprite.size.width / 2) >=
            [UIScreen mainScreen].bounds.size.width) {
            _sens = LEFT;
            return ;
        }
        _tankSprite.position = CGPointMake(_tankSprite.position.x + 1,
                                               _tankSprite.position.y);
    }
    else {
        if (_tankSprite.position.x - 1 - (_tankSprite.size.width / 2) <= 0) {
            _sens = RIGHT;
            return ;
        }

        self.tankSprite.position = CGPointMake(_tankSprite.position.x - 1,
                                               _tankSprite.position.y);
    }
}

- (void) lowStrat:(CGPoint)positionMonkey :(SKScene *)scene {
    SKSpriteNode *nodeShoot = [SKSpriteNode spriteNodeWithColor:[SKColor blackColor] size:CGSizeMake(15, 15)];
    
    nodeShoot.position = _tankSprite.position;
    nodeShoot.name = NAME_SPRITE_SHOOT_TANK;
    
    SKAction *shoot = [SKAction moveTo:CGPointMake(rand() % 80 + (positionMonkey.x - 40), [UIScreen mainScreen].bounds.size.height) duration:1.5];
    
    SKAction *wait = [SKAction waitForDuration:1.0 withRange:1.0];
    [scene addChild:nodeShoot];
    
    SKAction *sequenceAction = [SKAction sequence:@[wait, shoot]];
    
    [nodeShoot runAction:sequenceAction];
}

- (void) shootTank:(CGPoint)positionMonkey scene:(SKScene *)scene {
    SEL selectorStrat[3];
    
    _selectorStrat = [NSArray arrayWithObjects:@selector(lowStrat::), nil];
    
    
}

@end
