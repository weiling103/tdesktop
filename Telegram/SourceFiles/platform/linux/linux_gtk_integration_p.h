/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

extern "C" {
#include <gtk/gtk.h>
#include <gdk/gdk.h>
} // extern "C"

namespace Platform {
namespace Gtk {

inline void (*gtk_widget_show)(GtkWidget *widget) = nullptr;
inline void (*gtk_widget_hide)(GtkWidget *widget) = nullptr;
inline GdkWindow* (*gtk_widget_get_window)(GtkWidget *widget) = nullptr;
inline void (*gtk_widget_realize)(GtkWidget *widget) = nullptr;
inline gboolean (*gtk_widget_hide_on_delete)(GtkWidget *widget) = nullptr;
inline void (*gtk_widget_destroy)(GtkWidget *widget) = nullptr;
inline GtkClipboard* (*gtk_clipboard_get)(GdkAtom selection) = nullptr;
inline void (*gtk_clipboard_store)(GtkClipboard *clipboard) = nullptr;
inline GtkSelectionData* (*gtk_clipboard_wait_for_contents)(GtkClipboard *clipboard, GdkAtom target) = nullptr;
inline GdkPixbuf* (*gtk_clipboard_wait_for_image)(GtkClipboard *clipboard) = nullptr;
inline gboolean (*gtk_selection_data_targets_include_image)(const GtkSelectionData *selection_data, gboolean writable) = nullptr;
inline void (*gtk_selection_data_free)(GtkSelectionData *data) = nullptr;
inline GType (*gtk_file_chooser_get_type)(void) G_GNUC_CONST = nullptr;
inline GtkWidget* (*gtk_file_chooser_dialog_new)(const gchar *title, GtkWindow *parent, GtkFileChooserAction action, const gchar *first_button_text, ...) G_GNUC_NULL_TERMINATED = nullptr;
inline gboolean (*gtk_file_chooser_set_current_folder)(GtkFileChooser *chooser, const gchar *filename) = nullptr;
inline gchar* (*gtk_file_chooser_get_current_folder)(GtkFileChooser *chooser) = nullptr;
inline void (*gtk_file_chooser_set_current_name)(GtkFileChooser *chooser, const gchar *name) = nullptr;
inline gboolean (*gtk_file_chooser_select_filename)(GtkFileChooser *chooser, const gchar *filename) = nullptr;
inline GSList* (*gtk_file_chooser_get_filenames)(GtkFileChooser *chooser) = nullptr;
inline void (*gtk_file_chooser_set_filter)(GtkFileChooser *chooser, GtkFileFilter *filter) = nullptr;
inline GtkFileFilter* (*gtk_file_chooser_get_filter)(GtkFileChooser *chooser) = nullptr;
inline GType (*gtk_window_get_type)(void) G_GNUC_CONST = nullptr;
inline void (*gtk_window_set_title)(GtkWindow *window, const gchar *title) = nullptr;
inline void (*gtk_file_chooser_set_local_only)(GtkFileChooser *chooser, gboolean local_only) = nullptr;
inline void (*gtk_file_chooser_set_action)(GtkFileChooser *chooser, GtkFileChooserAction action) = nullptr;
inline void (*gtk_file_chooser_set_select_multiple)(GtkFileChooser *chooser, gboolean select_multiple) = nullptr;
inline void (*gtk_file_chooser_set_do_overwrite_confirmation)(GtkFileChooser *chooser, gboolean do_overwrite_confirmation) = nullptr;
inline GType (*gtk_dialog_get_type)(void) G_GNUC_CONST = nullptr;
inline GtkWidget* (*gtk_dialog_get_widget_for_response)(GtkDialog *dialog, gint response_id) = nullptr;
inline GType (*gtk_button_get_type)(void) G_GNUC_CONST = nullptr;
inline void (*gtk_button_set_label)(GtkButton *button, const gchar *label) = nullptr;
inline void (*gtk_file_chooser_remove_filter)(GtkFileChooser *chooser, GtkFileFilter *filter) = nullptr;
inline void (*gtk_file_filter_set_name)(GtkFileFilter *filter, const gchar *name) = nullptr;
inline void (*gtk_file_filter_add_pattern)(GtkFileFilter *filter, const gchar *pattern) = nullptr;
inline void (*gtk_file_chooser_add_filter)(GtkFileChooser *chooser, GtkFileFilter *filter) = nullptr;
inline void (*gtk_file_chooser_set_preview_widget)(GtkFileChooser *chooser, GtkWidget *preview_widget) = nullptr;
inline gchar* (*gtk_file_chooser_get_preview_filename)(GtkFileChooser *chooser) = nullptr;
inline void (*gtk_file_chooser_set_preview_widget_active)(GtkFileChooser *chooser, gboolean active) = nullptr;
inline GtkFileFilter* (*gtk_file_filter_new)(void) = nullptr;
inline GType (*gtk_image_get_type)(void) G_GNUC_CONST = nullptr;
inline GtkWidget* (*gtk_image_new)(void) = nullptr;
inline void (*gtk_image_set_from_pixbuf)(GtkImage *image, GdkPixbuf *pixbuf) = nullptr;
inline GType (*gtk_app_chooser_get_type)(void) G_GNUC_CONST = nullptr;
inline GtkWidget* (*gtk_app_chooser_dialog_new)(GtkWindow *parent, GtkDialogFlags flags, GFile *file) = nullptr;
inline GAppInfo* (*gtk_app_chooser_get_app_info)(GtkAppChooser *self) = nullptr;
inline void (*gdk_window_set_modal_hint)(GdkWindow *window, gboolean modal) = nullptr;
inline void (*gdk_window_focus)(GdkWindow *window, guint32 timestamp) = nullptr;
inline gint (*gtk_dialog_run)(GtkDialog *dialog) = nullptr;
inline GdkAtom (*gdk_atom_intern)(const gchar *atom_name, gboolean only_if_exists) = nullptr;
inline GdkDisplay* (*gdk_display_get_default)(void) = nullptr;
inline GdkMonitor* (*gdk_display_get_monitor)(GdkDisplay *display, int monitor_num) = nullptr;
inline GdkMonitor* (*gdk_display_get_primary_monitor)(GdkDisplay *display) = nullptr;
inline int (*gdk_monitor_get_scale_factor)(GdkMonitor *monitor) = nullptr;
inline GdkPixbuf* (*gdk_pixbuf_new_from_file_at_size)(const gchar *filename, int width, int height, GError **error) = nullptr;
inline gboolean (*gdk_pixbuf_get_has_alpha)(const GdkPixbuf *pixbuf) = nullptr;
inline guchar* (*gdk_pixbuf_get_pixels)(const GdkPixbuf *pixbuf) = nullptr;
inline int (*gdk_pixbuf_get_width)(const GdkPixbuf *pixbuf) = nullptr;
inline int (*gdk_pixbuf_get_height)(const GdkPixbuf *pixbuf) = nullptr;
inline int (*gdk_pixbuf_get_rowstride)(const GdkPixbuf *pixbuf) = nullptr;

} // namespace Gtk
} // namespace Platform
