#ifndef __LIBCLI_RESOLVE_PROTO_H__
#define __LIBCLI_RESOLVE_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

#ifndef _PUBLIC_
#define _PUBLIC_
#endif


/* The following definitions come from libcli/resolve/resolve.c  */

struct composite_context *resolve_name_send(struct nbt_name *name, struct event_context *event_ctx,
					    const char **methods);
NTSTATUS resolve_name_recv(struct composite_context *c, 
			   TALLOC_CTX *mem_ctx, const char **reply_addr);
NTSTATUS resolve_name(struct nbt_name *name, TALLOC_CTX *mem_ctx, const char **reply_addr, 
		      struct event_context *ev);
void make_nbt_name(struct nbt_name *nbt, const char *name, int type);
void make_nbt_name_client(struct nbt_name *nbt, const char *name);
void make_nbt_name_server(struct nbt_name *nbt, const char *name);

/* The following definitions come from libcli/resolve/bcast.c  */

struct composite_context *resolve_name_bcast_send(TALLOC_CTX *mem_ctx, 
						  struct event_context *event_ctx,
						  struct nbt_name *name);
NTSTATUS resolve_name_bcast_recv(struct composite_context *c, 
				 TALLOC_CTX *mem_ctx, const char **reply_addr);
NTSTATUS resolve_name_bcast(struct nbt_name *name, 
			    TALLOC_CTX *mem_ctx,
			    const char **reply_addr);

/* The following definitions come from libcli/resolve/nbtlist.c  */

struct composite_context *resolve_name_nbtlist_send(TALLOC_CTX *mem_ctx,
						    struct event_context *event_ctx,
						    struct nbt_name *name, 
						    const char **address_list,
						    BOOL broadcast,
						    BOOL wins_lookup);
NTSTATUS resolve_name_nbtlist_recv(struct composite_context *c, 
				   TALLOC_CTX *mem_ctx, const char **reply_addr);
NTSTATUS resolve_name_nbtlist(struct nbt_name *name, 
			      TALLOC_CTX *mem_ctx,
			      const char **address_list,
			      BOOL broadcast, BOOL wins_lookup,
			      const char **reply_addr);

/* The following definitions come from libcli/resolve/wins.c  */

struct composite_context *resolve_name_wins_send(TALLOC_CTX *mem_ctx, 
						 struct event_context *event_ctx,
						 struct nbt_name *name);
NTSTATUS resolve_name_wins_recv(struct composite_context *c, 
				TALLOC_CTX *mem_ctx, const char **reply_addr);
NTSTATUS resolve_name_wins(struct nbt_name *name, 
			    TALLOC_CTX *mem_ctx,
			    const char **reply_addr);

/* The following definitions come from libcli/resolve/host.c  */

struct composite_context *resolve_name_host_send(TALLOC_CTX *mem_ctx,
						 struct event_context *event_ctx,
						 struct nbt_name *name);
NTSTATUS resolve_name_host_recv(struct composite_context *c, 
				TALLOC_CTX *mem_ctx, const char **reply_addr);
NTSTATUS resolve_name_host(struct nbt_name *name, 
			    TALLOC_CTX *mem_ctx,
			    const char **reply_addr);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __LIBCLI_RESOLVE_PROTO_H__ */

