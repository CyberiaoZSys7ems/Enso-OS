/* NotificationStack.c generated by valac 0.30.1, the Vala compiler
 * generated from NotificationStack.vala, do not modify */

/**/
/*  Copyright (C) 2014 Tom Beckmann*/
/**/
/*  This program is free software: you can redistribute it and/or modify*/
/*  it under the terms of the GNU General Public License as published by*/
/*  the Free Software Foundation, either version 3 of the License, or*/
/*  (at your option) any later version.*/
/**/
/*  This program is distributed in the hope that it will be useful,*/
/*  but WITHOUT ANY WARRANTY; without even the implied warranty of*/
/*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the*/
/*  GNU General Public License for more details.*/
/**/
/*  You should have received a copy of the GNU General Public License*/
/*  along with this program.  If not, see <http://www.gnu.org/licenses/>.*/
/**/

#include <glib.h>
#include <glib-object.h>
#include <clutter/clutter.h>
#include <meta/screen.h>
#include <float.h>
#include <math.h>


#define GALA_PLUGINS_NOTIFY_TYPE_NOTIFICATION_STACK (gala_plugins_notify_notification_stack_get_type ())
#define GALA_PLUGINS_NOTIFY_NOTIFICATION_STACK(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GALA_PLUGINS_NOTIFY_TYPE_NOTIFICATION_STACK, GalaPluginsNotifyNotificationStack))
#define GALA_PLUGINS_NOTIFY_NOTIFICATION_STACK_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GALA_PLUGINS_NOTIFY_TYPE_NOTIFICATION_STACK, GalaPluginsNotifyNotificationStackClass))
#define GALA_PLUGINS_NOTIFY_IS_NOTIFICATION_STACK(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GALA_PLUGINS_NOTIFY_TYPE_NOTIFICATION_STACK))
#define GALA_PLUGINS_NOTIFY_IS_NOTIFICATION_STACK_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GALA_PLUGINS_NOTIFY_TYPE_NOTIFICATION_STACK))
#define GALA_PLUGINS_NOTIFY_NOTIFICATION_STACK_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GALA_PLUGINS_NOTIFY_TYPE_NOTIFICATION_STACK, GalaPluginsNotifyNotificationStackClass))

typedef struct _GalaPluginsNotifyNotificationStack GalaPluginsNotifyNotificationStack;
typedef struct _GalaPluginsNotifyNotificationStackClass GalaPluginsNotifyNotificationStackClass;
typedef struct _GalaPluginsNotifyNotificationStackPrivate GalaPluginsNotifyNotificationStackPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define GALA_PLUGINS_NOTIFY_TYPE_NOTIFICATION (gala_plugins_notify_notification_get_type ())
#define GALA_PLUGINS_NOTIFY_NOTIFICATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GALA_PLUGINS_NOTIFY_TYPE_NOTIFICATION, GalaPluginsNotifyNotification))
#define GALA_PLUGINS_NOTIFY_NOTIFICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GALA_PLUGINS_NOTIFY_TYPE_NOTIFICATION, GalaPluginsNotifyNotificationClass))
#define GALA_PLUGINS_NOTIFY_IS_NOTIFICATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GALA_PLUGINS_NOTIFY_TYPE_NOTIFICATION))
#define GALA_PLUGINS_NOTIFY_IS_NOTIFICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GALA_PLUGINS_NOTIFY_TYPE_NOTIFICATION))
#define GALA_PLUGINS_NOTIFY_NOTIFICATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GALA_PLUGINS_NOTIFY_TYPE_NOTIFICATION, GalaPluginsNotifyNotificationClass))

typedef struct _GalaPluginsNotifyNotification GalaPluginsNotifyNotification;
typedef struct _GalaPluginsNotifyNotificationClass GalaPluginsNotifyNotificationClass;
#define _g_list_free0(var) ((var == NULL) ? NULL : (var = (g_list_free (var), NULL)))

struct _GalaPluginsNotifyNotificationStack {
	ClutterActor parent_instance;
	GalaPluginsNotifyNotificationStackPrivate * priv;
};

struct _GalaPluginsNotifyNotificationStackClass {
	ClutterActorClass parent_class;
};

struct _GalaPluginsNotifyNotificationStackPrivate {
	MetaScreen* _screen;
};


static gpointer gala_plugins_notify_notification_stack_parent_class = NULL;

GType gala_plugins_notify_notification_stack_get_type (void) G_GNUC_CONST;
#define GALA_PLUGINS_NOTIFY_NOTIFICATION_STACK_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GALA_PLUGINS_NOTIFY_TYPE_NOTIFICATION_STACK, GalaPluginsNotifyNotificationStackPrivate))
enum  {
	GALA_PLUGINS_NOTIFY_NOTIFICATION_STACK_DUMMY_PROPERTY,
	GALA_PLUGINS_NOTIFY_NOTIFICATION_STACK_SCREEN
};
#define GALA_PLUGINS_NOTIFY_NOTIFICATION_STACK_TOP_OFFSET 2
#define GALA_PLUGINS_NOTIFY_NOTIFICATION_STACK_ADDITIONAL_MARGIN 12
GalaPluginsNotifyNotificationStack* gala_plugins_notify_notification_stack_new (MetaScreen* screen);
GalaPluginsNotifyNotificationStack* gala_plugins_notify_notification_stack_construct (GType object_type, MetaScreen* screen);
GType gala_plugins_notify_notification_get_type (void) G_GNUC_CONST;
void gala_plugins_notify_notification_stack_show_notification (GalaPluginsNotifyNotificationStack* self, GalaPluginsNotifyNotification* notification);
static void __lambda9_ (GalaPluginsNotifyNotificationStack* self);
static void ___lambda9__g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self);
static void __lambda10_ (GalaPluginsNotifyNotificationStack* self);
static void gala_plugins_notify_notification_stack_update_positions (GalaPluginsNotifyNotificationStack* self, gfloat add_y);
static void ___lambda10__clutter_actor_destroy (ClutterActor* _sender, gpointer self);
static void __lambda11_ (GalaPluginsNotifyNotificationStack* self);
static void ___lambda11__clutter_timeline_completed (ClutterTimeline* _sender, gpointer self);
#define GALA_PLUGINS_NOTIFY_NOTIFICATION_WIDTH 350
gboolean gala_plugins_notify_notification_get_being_destroyed (GalaPluginsNotifyNotification* self);
MetaScreen* gala_plugins_notify_notification_stack_get_screen (GalaPluginsNotifyNotificationStack* self);
static void gala_plugins_notify_notification_stack_set_screen (GalaPluginsNotifyNotificationStack* self, MetaScreen* value);
static GObject * gala_plugins_notify_notification_stack_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
#define GALA_PLUGINS_NOTIFY_NOTIFICATION_MARGIN 12
static void gala_plugins_notify_notification_stack_finalize (GObject* obj);
static void _vala_gala_plugins_notify_notification_stack_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_gala_plugins_notify_notification_stack_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


GalaPluginsNotifyNotificationStack* gala_plugins_notify_notification_stack_construct (GType object_type, MetaScreen* screen) {
	GalaPluginsNotifyNotificationStack * self = NULL;
	MetaScreen* _tmp0_ = NULL;
#line 34 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	g_return_val_if_fail (screen != NULL, NULL);
#line 36 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	_tmp0_ = screen;
#line 36 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	self = (GalaPluginsNotifyNotificationStack*) g_object_new (object_type, "screen", _tmp0_, NULL);
#line 34 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	return self;
#line 110 "NotificationStack.c"
}


GalaPluginsNotifyNotificationStack* gala_plugins_notify_notification_stack_new (MetaScreen* screen) {
#line 34 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	return gala_plugins_notify_notification_stack_construct (GALA_PLUGINS_NOTIFY_TYPE_NOTIFICATION_STACK, screen);
#line 117 "NotificationStack.c"
}


static void __lambda9_ (GalaPluginsNotifyNotificationStack* self) {
#line 57 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	g_signal_emit_by_name (self, "animations-changed", TRUE);
#line 124 "NotificationStack.c"
}


static void ___lambda9__g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self) {
#line 56 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	__lambda9_ ((GalaPluginsNotifyNotificationStack*) self);
#line 131 "NotificationStack.c"
}


static void __lambda10_ (GalaPluginsNotifyNotificationStack* self) {
#line 61 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	g_signal_emit_by_name (self, "animations-changed", FALSE);
#line 62 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	gala_plugins_notify_notification_stack_update_positions (self, 0.0f);
#line 140 "NotificationStack.c"
}


static void ___lambda10__clutter_actor_destroy (ClutterActor* _sender, gpointer self) {
#line 60 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	__lambda10_ ((GalaPluginsNotifyNotificationStack*) self);
#line 147 "NotificationStack.c"
}


static void __lambda11_ (GalaPluginsNotifyNotificationStack* self) {
#line 66 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	g_signal_emit_by_name (self, "animations-changed", FALSE);
#line 154 "NotificationStack.c"
}


static void ___lambda11__clutter_timeline_completed (ClutterTimeline* _sender, gpointer self) {
#line 65 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	__lambda11_ ((GalaPluginsNotifyNotificationStack*) self);
#line 161 "NotificationStack.c"
}


void gala_plugins_notify_notification_stack_show_notification (GalaPluginsNotifyNotificationStack* self, GalaPluginsNotifyNotification* notification) {
	ClutterActor* _tmp0_ = NULL;
	GalaPluginsNotifyNotification* _tmp1_ = NULL;
	GalaPluginsNotifyNotification* _tmp2_ = NULL;
	GalaPluginsNotifyNotification* _tmp3_ = NULL;
	GalaPluginsNotifyNotification* _tmp4_ = NULL;
	ClutterTransition* _tmp5_ = NULL;
	gfloat height = 0.0F;
	GalaPluginsNotifyNotification* _tmp6_ = NULL;
	gfloat _tmp7_ = 0.0F;
	GalaPluginsNotifyNotification* _tmp8_ = NULL;
	GalaPluginsNotifyNotification* _tmp9_ = NULL;
#line 45 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	g_return_if_fail (self != NULL);
#line 45 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	g_return_if_fail (notification != NULL);
#line 47 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	g_signal_emit_by_name (self, "animations-changed", TRUE);
#line 50 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	_tmp0_ = clutter_actor_get_parent ((ClutterActor*) self);
#line 50 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	clutter_actor_set_child_above_sibling (_tmp0_, (ClutterActor*) self, NULL);
#line 54 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	_tmp1_ = notification;
#line 54 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	clutter_actor_set_margin_left ((ClutterActor*) _tmp1_, (gfloat) GALA_PLUGINS_NOTIFY_NOTIFICATION_STACK_ADDITIONAL_MARGIN);
#line 56 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	_tmp2_ = notification;
#line 56 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	g_signal_connect_object ((GObject*) _tmp2_, "notify::being-destroyed", (GCallback) ___lambda9__g_object_notify, self, 0);
#line 60 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	_tmp3_ = notification;
#line 60 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	g_signal_connect_object ((ClutterActor*) _tmp3_, "destroy", (GCallback) ___lambda10__clutter_actor_destroy, self, 0);
#line 65 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	_tmp4_ = notification;
#line 65 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	_tmp5_ = clutter_actor_get_transition ((ClutterActor*) _tmp4_, "entry");
#line 65 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	g_signal_connect_object ((ClutterTimeline*) _tmp5_, "completed", (GCallback) ___lambda11__clutter_timeline_completed, self, 0);
#line 70 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	_tmp6_ = notification;
#line 70 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	clutter_actor_get_preferred_height ((ClutterActor*) _tmp6_, (gfloat) GALA_PLUGINS_NOTIFY_NOTIFICATION_WIDTH, &_tmp7_, NULL);
#line 70 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	height = _tmp7_;
#line 71 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	gala_plugins_notify_notification_stack_update_positions (self, height);
#line 73 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	_tmp8_ = notification;
#line 73 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	clutter_actor_set_y ((ClutterActor*) _tmp8_, (gfloat) GALA_PLUGINS_NOTIFY_NOTIFICATION_STACK_TOP_OFFSET);
#line 74 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	_tmp9_ = notification;
#line 74 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	clutter_actor_insert_child_at_index ((ClutterActor*) self, (ClutterActor*) _tmp9_, 0);
#line 221 "NotificationStack.c"
}


static void gala_plugins_notify_notification_stack_update_positions (GalaPluginsNotifyNotificationStack* self, gfloat add_y) {
	gfloat y = 0.0F;
	gfloat _tmp0_ = 0.0F;
	gint i = 0;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	gint _tmp3_ = 0;
	gint delay_step = 0;
	GList* _tmp5_ = NULL;
#line 77 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	g_return_if_fail (self != NULL);
#line 79 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	_tmp0_ = add_y;
#line 79 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	y = _tmp0_ + GALA_PLUGINS_NOTIFY_NOTIFICATION_STACK_TOP_OFFSET;
#line 80 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	_tmp1_ = clutter_actor_get_n_children ((ClutterActor*) self);
#line 80 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	i = _tmp1_;
#line 81 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	_tmp3_ = i;
#line 81 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	if (_tmp3_ > 0) {
#line 248 "NotificationStack.c"
		gint _tmp4_ = 0;
#line 81 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
		_tmp4_ = i;
#line 81 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
		_tmp2_ = 150 / _tmp4_;
#line 254 "NotificationStack.c"
	} else {
#line 81 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
		_tmp2_ = 0;
#line 258 "NotificationStack.c"
	}
#line 81 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	delay_step = _tmp2_;
#line 82 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	_tmp5_ = clutter_actor_get_children ((ClutterActor*) self);
#line 264 "NotificationStack.c"
	{
		GList* child_collection = NULL;
		GList* child_it = NULL;
#line 82 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
		child_collection = _tmp5_;
#line 82 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
		for (child_it = child_collection; child_it != NULL; child_it = child_it->next) {
#line 272 "NotificationStack.c"
			ClutterActor* child = NULL;
#line 82 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
			child = (ClutterActor*) child_it->data;
#line 276 "NotificationStack.c"
			{
				ClutterActor* _tmp6_ = NULL;
				gboolean _tmp7_ = FALSE;
				gboolean _tmp8_ = FALSE;
				ClutterActor* _tmp9_ = NULL;
				ClutterActor* _tmp10_ = NULL;
				ClutterActor* _tmp11_ = NULL;
				ClutterActor* _tmp12_ = NULL;
				gint _tmp13_ = 0;
				gint _tmp14_ = 0;
				ClutterActor* _tmp15_ = NULL;
				gfloat _tmp16_ = 0.0F;
				ClutterActor* _tmp17_ = NULL;
				gfloat _tmp18_ = 0.0F;
				ClutterActor* _tmp19_ = NULL;
				gfloat _tmp20_ = 0.0F;
				gfloat _tmp21_ = 0.0F;
#line 83 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
				_tmp6_ = child;
#line 83 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
				_tmp7_ = gala_plugins_notify_notification_get_being_destroyed (G_TYPE_CHECK_INSTANCE_CAST (_tmp6_, GALA_PLUGINS_NOTIFY_TYPE_NOTIFICATION, GalaPluginsNotifyNotification));
#line 83 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
				_tmp8_ = _tmp7_;
#line 83 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
				if (_tmp8_) {
#line 84 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
					continue;
#line 304 "NotificationStack.c"
				}
#line 86 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
				_tmp9_ = child;
#line 86 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
				clutter_actor_save_easing_state (_tmp9_);
#line 87 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
				_tmp10_ = child;
#line 87 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
				clutter_actor_set_easing_mode (_tmp10_, CLUTTER_EASE_OUT_BACK);
#line 88 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
				_tmp11_ = child;
#line 88 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
				clutter_actor_set_easing_duration (_tmp11_, (guint) 200);
#line 89 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
				_tmp12_ = child;
#line 89 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
				_tmp13_ = i;
#line 89 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
				i = _tmp13_ - 1;
#line 89 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
				_tmp14_ = delay_step;
#line 89 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
				clutter_actor_set_easing_delay (_tmp12_, (guint) (_tmp13_ * _tmp14_));
#line 91 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
				_tmp15_ = child;
#line 91 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
				_tmp16_ = y;
#line 91 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
				clutter_actor_set_y (_tmp15_, _tmp16_);
#line 92 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
				_tmp17_ = child;
#line 92 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
				clutter_actor_restore_easing_state (_tmp17_);
#line 94 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
				_tmp18_ = y;
#line 94 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
				_tmp19_ = child;
#line 94 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
				_tmp20_ = clutter_actor_get_height (_tmp19_);
#line 94 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
				_tmp21_ = _tmp20_;
#line 94 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
				y = _tmp18_ + _tmp21_;
#line 348 "NotificationStack.c"
			}
		}
#line 82 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
		_g_list_free0 (child_collection);
#line 353 "NotificationStack.c"
	}
}


MetaScreen* gala_plugins_notify_notification_stack_get_screen (GalaPluginsNotifyNotificationStack* self) {
	MetaScreen* result;
	MetaScreen* _tmp0_ = NULL;
#line 32 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 32 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	_tmp0_ = self->priv->_screen;
#line 32 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	result = _tmp0_;
#line 32 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	return result;
#line 369 "NotificationStack.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 32 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	return self ? g_object_ref (self) : NULL;
#line 376 "NotificationStack.c"
}


static void gala_plugins_notify_notification_stack_set_screen (GalaPluginsNotifyNotificationStack* self, MetaScreen* value) {
	MetaScreen* _tmp0_ = NULL;
	MetaScreen* _tmp1_ = NULL;
#line 32 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	g_return_if_fail (self != NULL);
#line 32 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	_tmp0_ = value;
#line 32 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 32 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	_g_object_unref0 (self->priv->_screen);
#line 32 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	self->priv->_screen = _tmp1_;
#line 32 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	g_object_notify ((GObject *) self, "screen");
#line 395 "NotificationStack.c"
}


static GObject * gala_plugins_notify_notification_stack_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	GalaPluginsNotifyNotificationStack * self;
#line 39 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	parent_class = G_OBJECT_CLASS (gala_plugins_notify_notification_stack_parent_class);
#line 39 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 39 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GALA_PLUGINS_NOTIFY_TYPE_NOTIFICATION_STACK, GalaPluginsNotifyNotificationStack);
#line 41 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	clutter_actor_set_width ((ClutterActor*) self, (gfloat) ((GALA_PLUGINS_NOTIFY_NOTIFICATION_WIDTH + (2 * GALA_PLUGINS_NOTIFY_NOTIFICATION_MARGIN)) + GALA_PLUGINS_NOTIFY_NOTIFICATION_STACK_ADDITIONAL_MARGIN));
#line 42 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	clutter_actor_set_clip_to_allocation ((ClutterActor*) self, TRUE);
#line 39 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	return obj;
#line 415 "NotificationStack.c"
}


static void gala_plugins_notify_notification_stack_class_init (GalaPluginsNotifyNotificationStackClass * klass) {
#line 23 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	gala_plugins_notify_notification_stack_parent_class = g_type_class_peek_parent (klass);
#line 23 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	g_type_class_add_private (klass, sizeof (GalaPluginsNotifyNotificationStackPrivate));
#line 23 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_gala_plugins_notify_notification_stack_get_property;
#line 23 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_gala_plugins_notify_notification_stack_set_property;
#line 23 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	G_OBJECT_CLASS (klass)->constructor = gala_plugins_notify_notification_stack_constructor;
#line 23 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	G_OBJECT_CLASS (klass)->finalize = gala_plugins_notify_notification_stack_finalize;
#line 23 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_PLUGINS_NOTIFY_NOTIFICATION_STACK_SCREEN, g_param_spec_object ("screen", "screen", "screen", meta_screen_get_type (), G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 23 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	g_signal_new ("animations_changed", GALA_PLUGINS_NOTIFY_TYPE_NOTIFICATION_STACK, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__BOOLEAN, G_TYPE_NONE, 1, G_TYPE_BOOLEAN);
#line 436 "NotificationStack.c"
}


static void gala_plugins_notify_notification_stack_instance_init (GalaPluginsNotifyNotificationStack * self) {
#line 23 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	self->priv = GALA_PLUGINS_NOTIFY_NOTIFICATION_STACK_GET_PRIVATE (self);
#line 443 "NotificationStack.c"
}


static void gala_plugins_notify_notification_stack_finalize (GObject* obj) {
	GalaPluginsNotifyNotificationStack * self;
#line 23 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GALA_PLUGINS_NOTIFY_TYPE_NOTIFICATION_STACK, GalaPluginsNotifyNotificationStack);
#line 32 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	_g_object_unref0 (self->priv->_screen);
#line 23 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	G_OBJECT_CLASS (gala_plugins_notify_notification_stack_parent_class)->finalize (obj);
#line 455 "NotificationStack.c"
}


GType gala_plugins_notify_notification_stack_get_type (void) {
	static volatile gsize gala_plugins_notify_notification_stack_type_id__volatile = 0;
	if (g_once_init_enter (&gala_plugins_notify_notification_stack_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GalaPluginsNotifyNotificationStackClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gala_plugins_notify_notification_stack_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GalaPluginsNotifyNotificationStack), 0, (GInstanceInitFunc) gala_plugins_notify_notification_stack_instance_init, NULL };
		GType gala_plugins_notify_notification_stack_type_id;
		gala_plugins_notify_notification_stack_type_id = g_type_register_static (clutter_actor_get_type (), "GalaPluginsNotifyNotificationStack", &g_define_type_info, 0);
		g_once_init_leave (&gala_plugins_notify_notification_stack_type_id__volatile, gala_plugins_notify_notification_stack_type_id);
	}
	return gala_plugins_notify_notification_stack_type_id__volatile;
}


static void _vala_gala_plugins_notify_notification_stack_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	GalaPluginsNotifyNotificationStack * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GALA_PLUGINS_NOTIFY_TYPE_NOTIFICATION_STACK, GalaPluginsNotifyNotificationStack);
#line 23 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	switch (property_id) {
#line 23 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
		case GALA_PLUGINS_NOTIFY_NOTIFICATION_STACK_SCREEN:
#line 23 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
		g_value_set_object (value, gala_plugins_notify_notification_stack_get_screen (self));
#line 23 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
		break;
#line 482 "NotificationStack.c"
		default:
#line 23 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 23 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
		break;
#line 488 "NotificationStack.c"
	}
}


static void _vala_gala_plugins_notify_notification_stack_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	GalaPluginsNotifyNotificationStack * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GALA_PLUGINS_NOTIFY_TYPE_NOTIFICATION_STACK, GalaPluginsNotifyNotificationStack);
#line 23 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
	switch (property_id) {
#line 23 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
		case GALA_PLUGINS_NOTIFY_NOTIFICATION_STACK_SCREEN:
#line 23 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
		gala_plugins_notify_notification_stack_set_screen (self, g_value_get_object (value));
#line 23 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
		break;
#line 504 "NotificationStack.c"
		default:
#line 23 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 23 "/home/nick/work/gala/plugins/notify/NotificationStack.vala"
		break;
#line 510 "NotificationStack.c"
	}
}


