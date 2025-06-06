//
//  NetwortTool.h
//  Netneto
//
//  Created by SHOKEN ITO on 2024/9/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetwortTool : NSObject
#pragma mark-首页banner图
+ (void)getHomeBannerSuccess:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-首页所有商品标签（不需要登录）
+ (void)getHomeAllGoodsSuccess:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-首页新品推荐及每日疯抢
+ (void)getHomeHeaderItem:(NSString *)url parm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-首页更多
+(void)getHomeSectionItem:(NSString *)url parm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-首页平台通知置顶
+ (void)getHomeNotificationSuccess:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-首页平台通知列表
+(void)getHomeNotificationList:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-首页平台通知详情
+(void)getHomeNotificationDetail:(NSString *)idstr Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;

#pragma mark-商品详情
+(void)getHomeProdInfo:(NSString *)prodid userId:(NSString *)userId success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-分类
+(void)getClassParentData:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-通过分类id商品列表信息
+(void)getClassChildData:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-商品评论数据
+(void)getCommentContentWithParam:(NSDictionary *)param  Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-商品好评率
+(void)getGoodCommentWithParam:(NSDictionary *)param  Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-根据商铺id获取商铺信息
+(void)getHomeShopDetail:(NSString *)idstr Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-根据商铺id获取商品列表
+(void)getHomeShopGoodListDetail:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-账号登录
+(void)loginWithUserName:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;

#pragma mark-验证码登录
+(void)loginWithCode:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取验证
+(void)loginWithGetCode:(NSString *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取注册验证
+(void)loginWithRegisterGetCode:(NSString *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取忘记密码时的验证码
+(void)loginWithForgetGetCode:(NSString *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-注册
+(void)registerWithGetData:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-重置密码校验
+(void)forgetCheckCodeWith:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-修改密码
+(void)ChangePassWith:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-搜索历史
+(void)getHomeSearchHistorySuccess:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-搜索结果
+(void)getHomeSearchData:(NSDictionary *)dic Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-清空搜索历史
+(void)getClearSearchHistoryDataSuccess:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取用户信息
+(void)getUserInfoSuccess:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取用户订单信息
+(void)getUserOrderWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取退货订单列表信息
+(void)getUserRefunOrderWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取地址列表信息
+(void)getUserAddressListWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取订单详情
+(void)getOrderDetailWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取收据详情
+(void)getReceiptWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取退货订单详情
+(void)getOrderDetailRefunWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-填写物流信息
+(void)getCreateLogisticsWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取购物车列表信息
+(void)getShopCartParm:(NSDictionary *)parm success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取联系我们列表信息
+(void)getContactUsListWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取联系我们列表信息
+(void)getContactUsDetaiWithParm:(NSString *)idString Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-删除联系我们
+(void)delContactUsWithParm:(NSString *)idString Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-新增联系我们
+(void)addContactWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取店铺申请列表
+(void)getShopApplyListWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-商户端获取商品列表
+(void)getShopFindProdsWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-上-下架商品
+(void)getUpdateProdStatusWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-删除地址
+(void)delAddressWithParm:(NSString *)idString Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-设为默认地址
+(void)getDefaultAddWithParm:(NSString *)idString Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取省市区信息
+(void)getAddAreaListWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-通过code获取省市区信息
+(void)getListByPostCodeWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-新增用户地址
+(void)getSaveAddressWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-修改用户地址
+(void)getUpdateAddressWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-修改用户密码
+(void)getUpdatePwdWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取选中购物项总计
+(void)getShopTotalPriceWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-删除商品
+(void)getDelGoodsWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取评论
+(void)getGoodsCommonWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-修改用户信息
+(void)getSetUserInfoWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取购物车商品数量
+(void)getGoodsNumberWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取直播列表
+(void)getLiveListWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取直播分类列表
+(void)getLiveCategorizelistWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取直播搜索记录
+(void)getRoomQueryListWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-删除直播搜索记录
+(void)getDeleteLiveQueryRecordWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取个人房间信息
+(void)getRoomMsgWithSuccess:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-修改个人房间信息
+(void)getAddRoomMsgWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-首页修改个人房间信息
+(void)getIndexAddRoomMsgWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-退货申请审核
+(void)getSubmitRefundBefore:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-修改店铺
+(void)getUpdateShopDetailWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-创建店铺
+(void)getCreateShopDetailWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-添加、修改购物车用品
+(void)getJoinShopCarWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取rtcToken
+(void)getRoomRtcTokenWithChannel:(NSString *)Channel uid:(NSString *)uid Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取rtmToken
+(void)getRoomRtmTokenWithChannel:(NSString *)Channel Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-结算 生成订单
+(void)getCreateOrderWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-是否能生成订单
+(void)getIsCanCreateOrderWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取所有商家入驻审批的证件类型
+(void)getCardTypeWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-模糊查询获取银行信息
+(void)getBankInfoWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-模糊查询获取支行信息
+(void)getBankZhiInfoWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-商家入驻申请
+(void)getApplyShopUserWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-重新提交驳回的入驻申请
+(void)getReApplyShopUserWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取当前用户的入驻申请
+(void)getUserApplyListWithParm:(NSString *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-添加评论
+(void)getAddProdCommWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取小黄车列表
+(void)getLiveShopCarListWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-下架小黄车商品
+(void)getDownShowShopCarListWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取小黄车商品分类
+(void)getLiveShopCarClassWithSuccess:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-根据分类获取小黄车商品
+(void)getCartByClassListWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-添加小黄车商品
+(void)getAddShowCartWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取声网用户信息
+(void)getRtmInfoUserWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-关注/取消关注
+(void)getUpdateFollowWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-禁言
+(void)getForbiddenSpeechWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-踢出房间
+(void)getOutRoomWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-设置管理员-取消管理员权限
+(void)getAddManagerWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-管理员列表
+(void)getManagerListWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-银行卡支付
+(void)getSquarePayWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-生成订单
+(void)getOrderSubmitPayWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-修改联系我们
+(void)modyContactWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-申请退款
+(void)getSubmitRefundWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-取消申请退款
+(void)getCancelRefundWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-取消订单
+(void)getCancelOrderWithParm:(NSString *)idString Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-确认收货
+(void)getSureRecWithParm:(NSString *)idString Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-查看yamato物流
+(void)getYamatoWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;

#pragma mark-我的关注
+(void)getMyFollowWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-添加收藏
+(void)getAddOrCancelWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-添加收藏店铺
+(void)getAddOrCancelShopWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取收藏商品列表
+(void)getCollGoodsListWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取收藏店铺列表
+(void)getCollShopsListWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-查询收藏商品数量
+(void)getCollNumListWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-查询收藏店铺数量
+(void)getCollNumShopWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-查询是否收藏
+(void)getIsCollectionWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-查询是否收藏店铺
+(void)getIsCollectionShopWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-通过prodId获取商品全部规格列表
+(void)getSkuListWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取银行或支店信息
+(void)getBankInfoCusWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-注销用户
+(void)getCancelUserWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-观众获取主播房间信息
+(void)getLookRoomMsgWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-添加商品浏览记录
+(void)getProdBrowseWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-获取商品浏览记录
+(void)getBorwsingHistoryWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-查询浏览记录数量
+(void)getBorwsingHistoryCountWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-查询我的私信数量
+(void)getfindImCountsWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-app版本控制
+(void)getAppVersionWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-注销用户理由
+(void)getCancelMsgWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-优惠券列表
+(void)getCouponListWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-我的优惠券列表
+(void)getMyCouponListWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
#pragma mark-领取优惠券
+(void)getCouponsWithParm:(NSDictionary *)parm Success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
@end

NS_ASSUME_NONNULL_END
