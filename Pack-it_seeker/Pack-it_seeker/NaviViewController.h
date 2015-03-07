//
//  NaviViewController.h
//  Pack-it_seeker
//
//  Created by Jiyang on 3/6/15.
//  Copyright (c) 2015 Jiyang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIImage+Rotate.h"
#import "BMapKit.h"
#import "PXShop.h"
#import "PXNetworkManager.h"

#define MYBUNDLE_NAME @ "mapapi.bundle"
#define MYBUNDLE_PATH [[[NSBundle mainBundle] resourcePath] stringByAppendingPathComponent: MYBUNDLE_NAME]
#define MYBUNDLE [NSBundle bundleWithPath: MYBUNDLE_PATH]

@interface RouteAnnotation : BMKPointAnnotation
{
    int _type;          //<0:起点 1：终点 2：公交 3：地铁 4:驾乘 5:途经点
    int _degree;
}

@property (nonatomic) int type;
@property (nonatomic) int degree;
@end

@implementation RouteAnnotation

@synthesize type = _type;
@synthesize degree = _degree;
@end


@interface NaviViewController : UIViewController <UIGestureRecognizerDelegate, BMKGeneralDelegate, BMKMapViewDelegate, BMKLocationServiceDelegate, BMKPoiSearchDelegate, BMKGeoCodeSearchDelegate, BMKRouteSearchDelegate> {
    
    __weak IBOutlet BMKMapView *_mapView;
    
    BMKLocationService* _locService;
    BMKPoiSearch *_poiSearcher;
    BMKGeoCodeSearch *_geoCodeSearcher;
    BMKRouteSearch *_routeSearcher;
    
    BMKPointAnnotation *_destAnnotation;
    
    __weak IBOutlet UISegmentedControl *_typeSwitcher;
}

@property (nonatomic, strong) CLLocationManager  *locationManager;
@property (strong, nonatomic) PXShop *destShop;

@end
