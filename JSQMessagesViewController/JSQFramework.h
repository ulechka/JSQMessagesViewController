//
//  JSQMessagesViewController.h
//  JSQMessagesViewController
//
//  Created by Uliana Khmeleva on 08/03/2017.
//  Copyright © 2017 UtasProject. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for JSQMessagesViewController.
FOUNDATION_EXPORT double JSQMessagesViewControllerVersionNumber;

//! Project version string for JSQMessagesViewController.
FOUNDATION_EXPORT const unsigned char JSQMessagesViewControllerVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <JSQMessagesViewController/PublicHeader.h>


#import "JSQSystemSoundPlayer+JSQMessages.h"
#import "NSBundle+JSQMessages.h"
#import "NSString+JSQMessages.h"
#import "UIColor+JSQMessages.h"
#import "UIDevice+JSQMessages.h"
#import "UIImage+JSQMessages.h"
#import "UIView+JSQMessages.h"
#import "JSQMessagesKeyboardController.h"
#import "JSQMessagesViewController.h"
#import "JSQMessagesAvatarImageFactory.h"
#import "JSQMessagesBubbleImageFactory.h"
#import "JSQMessagesMediaViewBubbleImageMasker.h"
#import "JSQMessagesTimestampFormatter.h"
#import "JSQMessagesToolbarButtonFactory.h"
#import "JSQMessages.h"
#import "JSQMessagesViewController.h"
#import "JSQAudioMediaViewAttributes.h"
#import "JSQMessagesBubbleSizeCalculating.h"
#import "JSQMessagesBubblesSizeCalculator.h"
#import "JSQMessagesCollectionViewFlowLayout.h"
#import "JSQMessagesCollectionViewFlowLayoutInvalidationContext.h"
#import "JSQMessagesCollectionViewLayoutAttributes.h"
#import "JSQAudioMediaItem.h"
#import "JSQLocationMediaItem.h"
#import "JSQMediaItem.h"
#import "JSQMessage.h"
#import "JSQMessageAvatarImageDataSource.h"
#import "JSQMessageBubbleImageDataSource.h"
#import "JSQMessageData.h"
#import "JSQMessageMediaData.h"
#import "JSQMessagesAvatarImage.h"
#import "JSQMessagesBubbleImage.h"
#import "JSQMessagesCollectionViewDataSource.h"
#import "JSQMessagesCollectionViewDelegateFlowLayout.h"
#import "JSQPhotoMediaItem.h"
#import "JSQVideoMediaItem.h"
#import "JSQMessagesCellTextView.h"
#import "JSQMessagesCollectionView.h"
#import "JSQMessagesCollectionViewCell.h"
#import "JSQMessagesCollectionViewCellIncoming.h"
#import "JSQMessagesCollectionViewCellOutgoing.h"
#import "JSQMessagesComposerTextView.h"
#import "JSQMessagesInputToolbar.h"
#import "JSQMessagesLabel.h"
#import "JSQMessagesLoadEarlierHeaderView.h"
#import "JSQMessagesMediaPlaceholderView.h"
#import "JSQMessagesToolbarContentView.h"
#import "JSQMessagesTypingIndicatorFooterView.h"
