/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/PassKit.framework/PassKit
 */



@protocol WLCardStackViewDelegate
-(void)cardStackView:(id)view deleteConfirmedForCard:(id)card;
@optional
-(void)cardStackView:(id)view didAnimateToState:(int)state;
-(void)flyInAnimationDidEnd;
@required
-(BOOL)passesGrowWhenFlipped;
-(int)suppressedContent;
@end

