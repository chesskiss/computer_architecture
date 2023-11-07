from _typeshed import Incomplete
from typing import Any

from .base import BaseEndpoint as BaseEndpoint

log: Any

class MetadataEndpoint(BaseEndpoint):
    raise_errors: Any
    endpoints: Any
    initial_claims: Any
    claims: Any
    def __init__(self, endpoints, claims={}, raise_errors: bool = True) -> None: ...
    def create_metadata_response(
        self, uri, http_method: str = "GET", body: Incomplete | None = None, headers: Incomplete | None = None
    ): ...
    def validate_metadata(
        self, array, key, is_required: bool = False, is_list: bool = False, is_url: bool = False, is_issuer: bool = False
    ) -> None: ...
    def validate_metadata_token(self, claims, endpoint) -> None: ...
    def validate_metadata_authorization(self, claims, endpoint): ...
    def validate_metadata_revocation(self, claims, endpoint) -> None: ...
    def validate_metadata_introspection(self, claims, endpoint) -> None: ...
    def validate_metadata_server(self): ...
