/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "FilteredPackageListController.h"

#import "UISearchBarDelegate-Protocol.h"

@interface SearchController : FilteredPackageListController <UISearchBarDelegate>
{
    struct MenesObjectHandle<UISearchBar, 1> search_;
    BOOL searchloaded_;
    _Bool summary_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didSelectPackage:(id)fp8;
- (void)reloadData;
- (void)viewDidAppear:(BOOL)fp8;
- (id)initWithDatabase:(id)fp8 query:(id)fp12;
- (_Bool)showsSections;
- (_Bool)isSummarized;
- (_Bool)shouldBlock;
- (_Bool)shouldYield;
- (void)searchBar:(id)fp8 textDidChange:(id)fp12;
- (void)searchBarSearchButtonClicked:(id)fp8;
- (void)searchBarCancelButtonClicked:(id)fp8;
- (void)searchBarButtonClicked:(id)fp8;
- (void)searchBarTextDidBeginEditing:(id)fp8;
- (void)usePrefix:(id)fp8;
- (void)useSearch;
- (id)termsForQuery:(id)fp8;
- (id)navigationURL;
- (id)referrerURL;

@end

